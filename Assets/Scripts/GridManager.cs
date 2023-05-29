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
    public GameObject tilePrefab;
    public GameObject playerPrefab;
    public GameObject enemyPrefab;

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

                // instantiate enemy if on last row
                if (x == width - 1)
                    tiles[x, y] = Instantiate(
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
                grid[x, y].isWalkable = true;
            }
        }
    }

    // Update is called once per frame
    void Update() { }

    public void Select(int x, int y)
    {
        ClearTiles();

        // change grid tile on character to selected
        tiles[x, y].GetComponent<MeshRenderer>().material = selectedMaterial;

        // change grid tile on around character to walkable if there is no character and isWalkable is true
        if (grid[x + 1, y].isWalkable)
        {
            tiles[x + 1, y].GetComponent<MeshRenderer>().material = walkableMaterial;
        }
    }

    // change all grid tile to be unwalkableMaterial
    private void ClearTiles()
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                tiles[i, j].GetComponent<MeshRenderer>().material = unwalkableMaterial;
            }
        }
    }
}
