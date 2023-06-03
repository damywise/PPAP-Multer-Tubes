using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public enum ActionType
{
    Move,
    Attack
}

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
    public GameObject attackButton;
    public GameObject moveButton;
    public TextMeshProUGUI healthText;
    public TextMeshProUGUI jobText;
    private GameObject selectedCharacter;
    private ActionType actionType = ActionType.Move;

    // material
    public Material walkableTileMaterial;
    public Material unwalkableTileMaterial;
    public Material selectedTileMaterial;
    public Material hoveredTileMaterial;
    public Material attackableTileMaterial;
    public Material enemyTileMaterial;

    private float scale;
    private float offsetX;
    private float offsetY;

    // Start is called before the first frame update
    void Start()
    {
        attackButton.SetActive(false);
        moveButton.SetActive(false);
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);

        offsetX = -width * 5 + 5;
        offsetY = -height * 5 + 5f;
        scale = 10f;
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
                float posX = grid[x, y].position.x;
                float posY = grid[x, y].position.z;
                // instantiate player if on first row
                if (x == 0)
                {
                    characters[x, y] = Instantiate(
                        playerPrefab,
                        new Vector3(posX, playerPrefab.transform.position.y, posY),
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
                {
                    enemies[x, y] = Instantiate(
                        enemyPrefab,
                        new Vector3(posX, enemyPrefab.transform.position.y, posY),
                        Quaternion.identity
                    );

                    // initialize script attached to enemy
                    enemies[x, y].GetComponent<Character>().x = x;
                    enemies[x, y].GetComponent<Character>().y = y;
                }
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
                grid[x, y].position = new Vector3(x * scale + offsetX, 0, y * scale + offsetY);
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

        // change grid tile on position to selected
        tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;

        // if selecting enemy
        if (enemies[x, y] != null)
        {
            healthText.gameObject.SetActive(true);
            jobText.gameObject.SetActive(true);
            healthText.text = "Health: " + enemies[x,y].GetComponent<Character>().health;
            jobText.text = "Enemy\nJob: " + enemies[x,y].GetComponent<Character>().characterType;
            return;
        }
        // else

        attackButton.SetActive(true);
        moveButton.SetActive(true);
        healthText.gameObject.SetActive(true);
        jobText.gameObject.SetActive(true);

        // enable collider and make opaque for all character except the newly selected one
        foreach (var character in characters)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = true;
                MakeCharacterOpaque(character);
            }
        }

        // change grid tile on around character to walkable if there is no character or obstacle
        selectedCharacter = characters[x, y];
        CharacterType characterType = selectedCharacter.GetComponent<Character>().characterType;

        healthText.text = "Health: " + selectedCharacter.GetComponent<Character>().health;
        jobText.text = "Job: " + characterType;
        int[,] moveDirections = null;
        if (characterType == CharacterType.Warrior)
            moveDirections = new int[,]
            {
                { 1, 0 },
                { -1, 0 },
                { 0, 1 },
                { 0, -1 },
                //
                { 1, 1 },
                { 1, -1 },
                { -1, 1 },
                { -1, -1 },
                //
                { 2, 0 },
                { -2, 0 },
                { 0, 2 },
                { 0, -2 }
            };
        else if (characterType == CharacterType.Gunner)
            moveDirections = new int[,]
            {
                { 1, 0 },
                { -1, 0 },
                { 0, 1 },
                { 0, -1 }
            };
        // attack directions
        int[,] attackDirections = null;
        if (characterType == CharacterType.Warrior)
            attackDirections = new int[,]
            {
                { 1, 0 },
                { -1, 0 },
                { 0, 1 },
                { 0, -1 }
            };
        else if (characterType == CharacterType.Gunner)
            attackDirections = new int[,]
            {
                { 1, 0 },
                { -1, 0 },
                { 0, 1 },
                { 0, -1 },
                //
                { 1, 1 },
                { 1, -1 },
                { -1, 1 },
                { -1, -1 },
                //
                { 2, 0 },
                { -2, 0 },
                { 0, 2 },
                { 0, -2 }
            };

        int[,] directions = actionType == ActionType.Move ? moveDirections : attackDirections;

        for (int i = 0; i < directions.GetLength(0); i++)
        {
            // cannot skip 2 tiles
            {
                if (
                    (directions[i, 0] > 1)
                    && !grid[x + directions[i, 0] - 1, y + directions[i, 1]].isWalkable
                )
                    continue;

                if (
                    (directions[i, 0] < -1)
                    && !grid[x + directions[i, 0] + 1, y + directions[i, 1]].isWalkable
                )
                    continue;

                if (
                    (directions[i, 1] > 1)
                    && !grid[x + directions[i, 0], y + directions[i, 1] - 1].isWalkable
                )
                    continue;

                if (
                    (directions[i, 1] < -1)
                    && !grid[x + directions[i, 0], y + directions[i, 1] + 1].isWalkable
                )
                    continue;
            }

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
            {
                if (actionType == ActionType.Attack)
                    tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
                continue;
            }
            tiles[newX, newY].GetComponent<MeshRenderer>().material =
                actionType == ActionType.Move ? walkableTileMaterial : attackableTileMaterial;
            grid[newX, newY].isWalkable = actionType == ActionType.Move;
            grid[newX, newY].isAttackable = actionType == ActionType.Attack;
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
        attackButton.SetActive(false);
        moveButton.SetActive(false);
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);

        bool isWalkable = grid[x, y].isWalkable;
        bool isAttackable = grid[x, y].isAttackable;

        // move character transform to position of tile
        if (selectedCharacter != null && isWalkable)
        {
            selectedCharacter.GetComponent<CapsuleCollider>().enabled = true;
            // move character
            // TODO: animate character move
            float posX = grid[x, y].position.x;
            float posY = grid[x, y].position.z;
            selectedCharacter.transform.position = new Vector3(
                posX,
                selectedCharacter.transform.position.y,
                posY
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

        if (enemies[x, y] != null && isAttackable)
        {
            // TODO(damywise): attack enemy by dmg
        }

        ClearTiles();
    }

    public void HandleChangeAction(ActionType _actionType)
    {
        actionType = _actionType;
        if (selectedCharacter != null)
        {
            // Reselect character. The function handles the rest/
            SelectCharacter(
                selectedCharacter.GetComponent<Character>().x,
                selectedCharacter.GetComponent<Character>().y
            );
        }
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
                tiles[i, j].GetComponent<MeshRenderer>().material = unwalkableTileMaterial;
                grid[i, j].isWalkable = false;
            }
        }
    }
}
