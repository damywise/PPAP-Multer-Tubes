using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridManager : MonoBehaviour
{
    public int width;
    public int height;
    public GridTile[,] grid;
    public GameObject[,] tiles;
    public GameObject[,] characters;
    public GameObject[,] enemies;
    public GameObject[,] obstacles;
    public GameObject tilePrefab;
    public GameObject playerPrefab;
    public GameObject enemyPrefab;
    private GameObject selectedCharacter;

    // material
    public Material walkableMaterial;
    public Material unwalkableMaterial;
    public Material selectedMaterial;
    public Material hoveredMaterial;

    private float scale;

    // Start is called before the first frame update
    void Start()
    {
        scale = 0.1f;
        width = 6;
        height = 6;
        Debug.Log("Hello Worldhehehe");
        CreateGrid();
        tiles = new GameObject[width, height];
        characters = new GameObject[width, height];
        enemies = new GameObject[width, height];
        obstacles = new GameObject[width, height];
        // spawn tilePrefab from grid
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                // instantiate player if on first row
                if (x == 0)
                {
                    characters[x, y] = Instantiate(
                        playerPrefab,
                        new Vector3(x * scale, playerPrefab.transform.position.y, y * scale),
                        Quaternion.identity
                    );

                    // initialize script attached to player
                    characters[x, y].GetComponent<Character>().x = x;
                    characters[x, y].GetComponent<Character>().y = y;
                }

                tiles[x, y] = Instantiate(tilePrefab, grid[x, y].position, Quaternion.identity);
                // initialize script attached to tile
                tiles[x, y].GetComponent<Tile>().x = x;
                tiles[x, y].GetComponent<Tile>().y = y;

                // instantiate enemy if on last row
                if (x == width - 1)
                    enemies[x, y] = Instantiate(
                        enemyPrefab,
                        new Vector3(x * scale, enemyPrefab.transform.position.y, y * scale),
                        Quaternion.identity
                    );
            }
        }
    }

    private void CreateGrid()
    {
        grid = new GridTile[width, height];
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                grid[x, y] = new GridTile();
                grid[x, y].position = new Vector3(x * scale, 0, y * scale);
                grid[x, y].isWalkable = false;
            }
        }
    }

    // Update is called once per frame
    void Update() { }

    // select character
    public void SelectCharacter(int x, int y)
    {
        ClearTiles();
        // enable collider and make opaque for all character except the newly selected one
        foreach (var character in characters)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = true;
                MakeCharacterOpaque(character);
            }
        }

        // change grid tile on character to selected
        tiles[x, y].GetComponent<MeshRenderer>().material = selectedMaterial;

        // change grid tile on around character to walkable if there is no character or obstacle
        selectedCharacter = characters[x, y];
        int[,] directions = null;
        if (selectedCharacter.GetComponent<Character>().characterType == CharacterType.Warrior)
            directions = new int[,]
            {
                { 1, 0 },
                { 1, 1 },
                { 1, -1 },
                { 2, 0 },
                { -1, 0 },
                { -1, 1 },
                { -1, -1 },
                { -2, 0 },
                { 0, 1 },
                { 0, 2 },
                { 0, -1 },
                { 0, -2 }
            };
        else if (selectedCharacter.GetComponent<Character>().characterType == CharacterType.Gunner)
            directions = new int[,]
            {
                { 1, 0 },
                { -1, 0 },
                { 0, 1 },
                { 0, -1 }
            };
        for (int i = 0; i < directions.GetLength(0); i++)
        {
            int newX = x + directions[i, 0];
            int newY = y + directions[i, 1];
            if (newX < 0 || newX >= width || newY < 0 || newY >= height)
                continue;
            // if (grid[newX, newY].isWalkable) continue;
            if (characters[newX, newY] != null)
                continue;
            if (obstacles[newX, newY] != null)
                continue;
            if (enemies[newX, newY] != null)
                continue;
            tiles[newX, newY].GetComponent<MeshRenderer>().material = walkableMaterial;
            grid[newX, newY].isWalkable = true;
        }
        // disable character collider isTrigger and
        // TODO: make selected character half transparent
        selectedCharacter.GetComponent<CapsuleCollider>().enabled = false;

        // make selected character half transparent
        MakeCharacterTransparent(selectedCharacter);
    }

    // select tile on grid
    public void SelectTile(int x, int y)
    {
        bool isWalkable = grid[x, y].isWalkable;

        // move character transform to position of tile
        if (selectedCharacter != null && isWalkable)
        {
            selectedCharacter.GetComponent<CapsuleCollider>().enabled = true;
            // move character
            // TODO: animate character move
            selectedCharacter.transform.position = new Vector3(
                x * scale,
                selectedCharacter.transform.position.y,
                y * scale
            );
            int oldX = selectedCharacter.GetComponent<Character>().x;
            int oldY = selectedCharacter.GetComponent<Character>().y;

            characters[x, y] = characters[oldX, oldY];
            characters[oldX, oldY] = null;

            characters[x, y].GetComponent<Character>().x = x;
            characters[x, y].GetComponent<Character>().y = y;

            MakeCharacterOpaque(selectedCharacter);
            selectedCharacter = null;
        }
        else
        {
            foreach (var character in characters)
            {
                if (character != null)
                {
                    character.GetComponent<CapsuleCollider>().enabled = true;
                    MakeCharacterOpaque(character);
                }
            }
        }

        ClearTiles();
    }

    private void MakeCharacterTransparent(GameObject character)
    {
        // Create a new material
        Material newMat = new Material(character.GetComponent<Renderer>().material);
        newMat.SetFloat("_Mode", 3);
        newMat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        newMat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        newMat.SetInt("_ZWrite", 0);
        newMat.DisableKeyword("_ALPHATEST_ON");
        newMat.EnableKeyword("_ALPHABLEND_ON");
        newMat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        newMat.renderQueue = 3000;
        // Get the current color of the material
        Color currentColor = newMat.color;

        // Set the alpha value of the color to 0.5f (half transparent)
        currentColor.a = 0.5f;

        // Set the new color on the material
        newMat.color = currentColor;

        // Set the new material on the object
        character.GetComponent<Renderer>().material = newMat;
    }

    private void MakeCharacterOpaque(GameObject character)
    {
        // Create a new material
        Material newMat = new Material(character.GetComponent<Renderer>().material);
        newMat.SetFloat("_Mode", 3);
        newMat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        newMat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        newMat.SetInt("_ZWrite", 0);
        newMat.DisableKeyword("_ALPHATEST_ON");
        newMat.EnableKeyword("_ALPHABLEND_ON");
        newMat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        newMat.renderQueue = 3000;
        // Get the current color of the material
        Color currentColor = newMat.color;

        // Set the alpha value of the color to 0.5f (half transparent)
        currentColor.a = 1f;

        // Set the new color on the material
        newMat.color = currentColor;

        // Set the new material on the object
        character.GetComponent<Renderer>().material = newMat;
    }

    // change all grid tile to be unwalkableMaterial
    private void ClearTiles()
    {
        Debug.Log("Tiles Cleared");
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                tiles[i, j].GetComponent<MeshRenderer>().material = unwalkableMaterial;
                grid[i, j].isWalkable = false;
            }
        }
    }
}
