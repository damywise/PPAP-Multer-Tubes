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

        // change grid tile on character to selected
        tiles[x, y].GetComponent<MeshRenderer>().material = selectedMaterial;

        // change grid tile on around character to walkable if there is no character or obstacle
        selectedCharacter = characters[x, y];
        int newX = x + 1;
        int newY = y;
        if (enemies[newX, newY] == null && characters[newX, newY] == null);
        {
            tiles[newX, newY].GetComponent<MeshRenderer>().material = walkableMaterial;
            grid[newX, newY].isWalkable = true;
        }
    }

    // select tile on grid
    public void SelectTile(int x, int y)
    {
        bool isWalkable = grid[x, y].isWalkable;

        Debug.Log("material is walkable by character :" + isWalkable);
        Debug.Log(selectedCharacter.transform.position);
        // move character transform to position of tile
        if (selectedCharacter != null)
        {
            // move character
            // TODO: animate character move
            selectedCharacter.transform.position = new Vector3(
                x * scale,
                selectedCharacter.transform.position.y,
                y * scale
            );
            int oldX = selectedCharacter.GetComponent<Character>().x;
            int oldY = selectedCharacter.GetComponent<Character>().y;
            characters[oldX, oldY].GetComponent<Character>().x = x;
            characters[oldX, oldY].GetComponent<Character>().y = y;
            characters[x, y] = characters[oldX, oldY];
            // remove characters at oldX, oldY
            characters[oldX, oldY] = null;
        }
        else
        {
            //TODO: attack enemy
        }

        ClearTiles();
    }

    // change all grid tile to be unwalkableMaterial
    private void ClearTiles()
    {
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
