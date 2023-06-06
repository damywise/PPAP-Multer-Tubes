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
    public TextMeshProUGUI turnText;
    private GameObject selectedCharacter;
    private ActionType actionType = ActionType.Move;
    private bool isEnemyTurn = false;
    private bool playerLose = false;
    private bool enemyLose = false;

    // material
    public Material walkableTileMaterial;
    public Material unwalkableTileMaterial;
    public Material selectedTileMaterial;
    public Material hoveredTileMaterial;
    public Material attackableTileMaterial;
    public Material enemyTileMaterial;

    //particle effect
    public GameObject warriorHitParticle;
    public GameObject gunnerHitParticle;

    private float scale;
    private float offsetX;
    private float offsetY;

    // Start is called before the first frame update
    void Start()
    {
        // Disable buttons and UI elements
        attackButton.SetActive(false);
        moveButton.SetActive(false);
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);

        // Set up grid
        offsetX = -width * 5 + 5;
        offsetY = -height * 5 + 5;
        scale = 0.0025f;
        CreateGrid();

        // Initialize arrays for game objects
        tiles = new GameObject[width, height];
        characters = new GameObject[width, height];
        enemies = new GameObject[width, height];
        obstacles = new GameObject[width, height];

        // Spawn tiles, characters, enemies, and obstacles
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                // Get position of current grid cell
                float posX = grid[x, y].position.x;
                float posY = grid[x, y].position.z;

                // Spawn player on first row
                if (x == 0)
                {
                    characters[x, y] = Instantiate(
                        playerPrefab,
                        new Vector3(posX, playerPrefab.transform.position.y, posY),
                        Quaternion.identity
                    );

                    // Set player properties
                    characters[x, y].GetComponent<Character>().x = x;
                    characters[x, y].GetComponent<Character>().y = y;
                    characters[x, y].GetComponent<Character>().characterType =
                        y % 2 == 0 ? CharacterType.Gunner : CharacterType.Warrior;
                    characters[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
                }

                // Spawn tile on current grid cell
                tiles[x, y] = Instantiate(tilePrefab, grid[x, y].position, Quaternion.identity);

                // Set tile properties
                tiles[x, y].GetComponent<Tile>().x = x;
                tiles[x, y].GetComponent<Tile>().y = y;

                // Spawn enemy on last row
                if (x == width - 1)
                {
                    enemies[x, y] = Instantiate(
                        enemyPrefab,
                        new Vector3(posX, enemyPrefab.transform.position.y, posY),
                        Quaternion.identity
                    );

                    // Set enemy properties
                    enemies[x, y].GetComponent<Character>().x = x;
                    enemies[x, y].GetComponent<Character>().y = y;
                    enemies[x, y].GetComponent<Character>().characterType =
                        y % 2 == 0 ? CharacterType.Gunner : CharacterType.Warrior;
                    enemies[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
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
                grid[x, y].position = new Vector3(
                    x * scale * 10 + offsetX * scale,
                    0,
                    y * scale * 10 + offsetY * scale
                );
                grid[x, y].isWalkable = false;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (enemyLose || playerLose)
        {
            turnText.text = playerLose ? "Player 2 WIN" : "Player 1 WIN";
        }
        else
            turnText.text = isEnemyTurn ? "Player 2 Turn" : "Player 1 Turn";
    }

    // select character
    public void SelectCharacter(int x, int y)
    {
        var enemy = isEnemyTurn ? characters[x, y] : enemies[x, y];

        // if selecting enemy
        if (enemy != null)
        {
            MakeAllCharactersOpaque();
            healthText.gameObject.SetActive(true);
            jobText.gameObject.SetActive(true);
            healthText.text = "Health: " + enemy.GetComponent<Character>().health;
            jobText.text = "Enemy\nJob: " + enemy.GetComponent<Character>().characterType;
            if (grid[x, y].isAttackable)
            {
                ClearTiles();
                StartCoroutine(
                    AttackEnemy(x, y, selectedCharacter.GetComponent<Character>().characterType)
                );
            }
            else
            {
                ClearTiles();
                tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;
            }

            return;
        }
        // else
        ClearTiles();

        tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;

        attackButton.SetActive(true);
        moveButton.SetActive(true);
        healthText.gameObject.SetActive(true);
        jobText.gameObject.SetActive(true);

        var chars = isEnemyTurn ? enemies : characters;

        // enable collider and make opaque for all character except the newly selected one
        foreach (var character in chars)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = true;
                MakeCharacterOpaque(character);
            }
        }

        selectedCharacter = isEnemyTurn ? enemies[x, y] : characters[x, y];
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
                    directions[i, 0] > 1
                    && x + directions[i, 0] - 1 >= 0
                    && x + directions[i, 0] - 1 < width
                    && y + directions[i, 1] >= 0
                    && y + directions[i, 1] < height
                )
                {
                    if (
                        actionType == ActionType.Move
                        && !grid[x + directions[i, 0] - 1, y + directions[i, 1]].isWalkable
                    )
                        continue;
                }

                if (
                    directions[i, 0] < -1
                    && x + directions[i, 0] + 1 >= 0
                    && x + directions[i, 0] + 1 < width
                    && y + directions[i, 1] >= 0
                    && y + directions[i, 1] < height
                )
                {
                    if (
                        actionType == ActionType.Move
                        && !grid[x + directions[i, 0] + 1, y + directions[i, 1]].isWalkable
                    )
                        continue;
                }

                if (
                    directions[i, 1] > 1
                    && x + directions[i, 0] >= 0
                    && x + directions[i, 0] < width
                    && y + directions[i, 1] - 1 >= 0
                    && y + directions[i, 1] - 1 < height
                )
                {
                    if (
                        actionType == ActionType.Move
                        && !grid[x + directions[i, 0], y + directions[i, 1] - 1].isWalkable
                    )
                        continue;
                }

                if (
                    directions[i, 1] < -1
                    && x + directions[i, 0] >= 0
                    && x + directions[i, 0] < width
                    && y + directions[i, 1] + 1 >= 0
                    && y + directions[i, 1] + 1 < height
                )
                {
                    if (
                        actionType == ActionType.Move
                        && !grid[x + directions[i, 0], y + directions[i, 1] + 1].isWalkable
                    )
                        continue;
                }
            }

            int newX = x + directions[i, 0];
            int newY = y + directions[i, 1];
            if (newX < 0 || newX >= width || newY < 0 || newY >= height)
                continue;
            // if (grid[newX, newY].isWalkable) continue;
            if (characters[newX, newY] != null)
            {
                if (isEnemyTurn && actionType == ActionType.Attack)
                {
                    tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
                    grid[newX, newY].isAttackable = true;
                }
                continue;
            }
            if (obstacles[newX, newY] != null)
                continue;
            if (enemies[newX, newY] != null)
            {
                if (!isEnemyTurn && actionType == ActionType.Attack)
                {
                    tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
                    grid[newX, newY].isAttackable = true;
                }
                continue;
            }
            tiles[newX, newY].GetComponent<MeshRenderer>().material =
                actionType == ActionType.Move ? walkableTileMaterial : attackableTileMaterial;
            grid[newX, newY].isWalkable = actionType == ActionType.Move;
            grid[newX, newY].isAttackable = actionType == ActionType.Attack;
        }

        // make selected character half transparent
        MakeCharacterTransparent(selectedCharacter);

        // disable character collider isTrigger
        selectedCharacter.GetComponent<CapsuleCollider>().enabled = false;
    }

    private IEnumerator AttackEnemy(int x, int y, CharacterType characterType)
    {
        var enemyChars = isEnemyTurn ? characters : enemies;
        Debug.Log("Start attacking");
        var enemy = isEnemyTurn
            ? characters[x, y].GetComponent<Character>()
            : enemies[x, y].GetComponent<Character>();
        enemy.health -= selectedCharacter.GetComponent<Character>().damage;
        Debug.Log("Enemy health: " + enemy.health);
        if (enemy.health <= 0)
        {
            if (isEnemyTurn)
            {
                Destroy(characters[x, y]);
                characters[x, y] = null;
            }
            else
            {
                Destroy(enemies[x, y]);
                enemies[x, y] = null;
            }
            Debug.Log("Enemy destroyed");

            healthText.gameObject.SetActive(false);
            jobText.gameObject.SetActive(false);

            int count = 0;
            foreach (var enemyChar in enemyChars)
            {
                if (enemyChar != null)
                {
                    count++;
                }
            }

            if (count == 0)
            {
                attackButton.SetActive(false);
                moveButton.SetActive(false);
                healthText.gameObject.SetActive(false);
                jobText.gameObject.SetActive(false);
                if (isEnemyTurn)
                {
                    playerLose = true;
                }
                else
                {
                    enemyLose = true;
                }
            }
        }
        healthText.text = "Health: " + enemy.health;

        isEnemyTurn = !isEnemyTurn;
        Debug.Log("Attacking enemy at (" + x + "," + y + ")");
        // play particle effect when attacking enemy on grid and wait for it to finish
        {
            var particle = Instantiate(
                characterType == CharacterType.Warrior ? warriorHitParticle : gunnerHitParticle,
                new Vector3(grid[x, y].position.x, 0.01f, grid[x, y].position.z),
                Quaternion.identity
            );
            yield return new WaitForSeconds(0.35f);
        }
        Debug.Log("Updated health text: " + healthText.text);
        // StartCoroutine(EnemyTurn());
    }

    // select tile on grid
    public void SelectTile(int x, int y)
    {
        if (characters[x, y] != null || enemies[x, y] != null)
        {
            SelectCharacter(x, y);
            return;
        }
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

            var chars = isEnemyTurn ? enemies : characters;

            chars[x, y] = chars[oldX, oldY];
            chars[oldX, oldY] = null;

            chars[x, y].GetComponent<Character>().x = x;
            chars[x, y].GetComponent<Character>().y = y;

            if (isEnemyTurn)
                enemies = chars;
            else
                characters = chars;

            MakeCharacterOpaque(selectedCharacter);
            selectedCharacter = null;
            // start enemy turn
            isEnemyTurn = !isEnemyTurn;
            // StartCoroutine(EnemyTurn());
        }
        else
        {
            MakeAllCharactersOpaque();
        }

        ClearTiles();
    }

    private void MakeAllCharactersOpaque()
    {
        foreach (var character in characters)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = true;
                MakeCharacterOpaque(character);
            }
        }
        foreach (var enemy in enemies)
        {
            if (enemy != null)
            {
                enemy.GetComponent<CapsuleCollider>().enabled = true;
                MakeCharacterOpaque(enemy);
            }
        }
    }

    private IEnumerator EnemyTurn()
    {
        turnText.text = "Enemy Turn";

        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);
        moveButton.SetActive(false);
        attackButton.SetActive(false);
        isEnemyTurn = true;
        Debug.Log("Enemy Turn");
        ClearTiles();

        // prevent anything from selectable
        foreach (var character in characters)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = false;
            }
        }

        GameObject[] newEnemies = new GameObject[enemies.Length];
        int count = 0;
        foreach (var enemy in enemies)
        {
            if (enemy != null)
            {
                newEnemies[count] = enemy;
                count++;
            }
        }

        if (count == 0)
        {
            enemyLose = true;
        }

        // enemy AI
        if (count != 0)
        {
            int randomNumber = Random.Range(0, count);
            GameObject enemy = newEnemies[randomNumber];
            Character enemyCharacter = enemy.GetComponent<Character>();
            // wait for 0.1 second
            yield return new WaitForSeconds(0.1f);

            int x = enemyCharacter.x;
            int y = enemyCharacter.y;
            ClearTiles();
            tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;

            healthText.gameObject.SetActive(true);
            jobText.gameObject.SetActive(true);
            healthText.text = "Health: " + enemyCharacter.GetComponent<Character>().health;
            jobText.text = "Enemy\nJob: " + enemyCharacter.GetComponent<Character>().characterType;

            // wait 1 second
            yield return new WaitForSeconds(0.2f);
        }

        // end enemy turn
        turnText.text = "Player Turn";
        isEnemyTurn = false;
        ClearTiles();
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);
        Debug.Log("Player Turn");
        MakeAllCharactersOpaque();
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

        // Get the current color of the material
        Color currentColor = newMat.color;

        // Set the alpha value of the color to 1f (opaque)
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
                grid[i, j].isAttackable = false;
            }
        }
    }
}
