using System.Collections;
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
    public GridTile[,] Grid;
    public GameObject[,] Tiles;
    public GameObject[,] Characters;
    public GameObject[,] Enemies;
    public GameObject[,] Obstacles;
    public GameObject tilePrefab;
    public GameObject playerPrefab;
    public GameObject enemyPrefab;
    public GameObject attackButton;
    public GameObject moveButton;
    public TextMeshProUGUI healthText;
    public TextMeshProUGUI jobText;
    public TextMeshProUGUI turnText;
    private GameObject _selectedCharacter;
    private ActionType _actionType = ActionType.Move;
    private bool _isEnemyTurn;
    private bool _playerLose;
    private bool _enemyLose;

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

    //sounds
    private AudioSource _audioSource;
    public AudioClip swordSound;
    public AudioClip gunSound;
    public AudioClip walkSound;
    public AudioClip hurtSound;

    private float _scale;
    private float _offsetX;
    private float _offsetY;
    private static readonly int Mode = Shader.PropertyToID("_Mode");
    private static readonly int SrcBlend = Shader.PropertyToID("_SrcBlend");
    private static readonly int DstBlend = Shader.PropertyToID("_DstBlend");
    private static readonly int ZWrite = Shader.PropertyToID("_ZWrite");

    // Start is called before the first frame update
    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();

        // Disable buttons and UI elements
        attackButton.SetActive(false);
        moveButton.SetActive(false);
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);

        // Set up grid
        _offsetX = -width * 5 + 5;
        _offsetY = -height * 5 + 5;
        _scale = 0.0025f;
        CreateGrid();

        // Initialize arrays for game objects
        Tiles = new GameObject[width, height];
        Characters = new GameObject[width, height];
        Enemies = new GameObject[width, height];
        Obstacles = new GameObject[width, height];

        // Spawn tiles, characters, enemies, and obstacles
        for (var x = 0; x < width; x++)
        {
            for (var y = 0; y < height; y++)
            {
                // Get position of current grid cell
                var posX = Grid[x, y].Position.x;
                var posY = Grid[x, y].Position.z;

                // Spawn player on first row
                if (x == 0)
                {
                    Characters[x, y] = Instantiate(
                        playerPrefab,
                        new Vector3(posX, playerPrefab.transform.position.y, posY),
                        Quaternion.identity
                    );

                    // Set player properties
                    Characters[x, y].GetComponent<Character>().x = x;
                    Characters[x, y].GetComponent<Character>().y = y;
                    Characters[x, y].GetComponent<Character>().characterType =
                        y % 2 != 0 ? CharacterType.Gunner : CharacterType.Warrior;
                    Characters[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
                }

                // Spawn tile on current grid cell
                Tiles[x, y] = Instantiate(tilePrefab, Grid[x, y].Position, Quaternion.identity);

                // Set tile properties
                Tiles[x, y].GetComponent<Tile>().x = x;
                Tiles[x, y].GetComponent<Tile>().y = y;

                // Spawn enemy on last row
                if (x != width - 1) continue;
                Enemies[x, y] = Instantiate(
                    enemyPrefab,
                    new Vector3(posX, enemyPrefab.transform.position.y, posY),
                    Quaternion.identity
                );

                // Set enemy properties
                Enemies[x, y].GetComponent<Character>().x = x;
                Enemies[x, y].GetComponent<Character>().y = y;
                Enemies[x, y].GetComponent<Character>().characterType =
                    y % 2 != 0 ? CharacterType.Gunner : CharacterType.Warrior;
                Enemies[x, y].GetComponent<Character>().damage = y % 2 == 0 ? 25 : 35;
            }
        }
    }

    private void CreateGrid()
    {
        Grid = new GridTile[width, height];
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                Grid[x, y] = new GridTile
                {
                    Position = new Vector3(
                        x * _scale * 10 + _offsetX * _scale,
                        0,
                        y * _scale * 10 + _offsetY * _scale
                    ),
                    IsWalkable = false
                };
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (_enemyLose || _playerLose)
        {
            turnText.text = _playerLose ? "Player 2 WIN" : "Player 1 WIN";
        }
        else
            turnText.text = _isEnemyTurn ? "Player 2 Turn" : "Player 1 Turn";
    }

    // select character
    public void SelectCharacter(int x, int y)
    {
        var enemy = _isEnemyTurn ? Characters[x, y] : Enemies[x, y];

        // if selecting enemy
        if (enemy != null)
        {
            MakeAllCharactersOpaque();
            healthText.gameObject.SetActive(true);
            jobText.gameObject.SetActive(true);
            healthText.text = "Health: " + enemy.GetComponent<Character>().health;
            jobText.text = "Enemy\nJob: " + enemy.GetComponent<Character>().characterType;
            if (Grid[x, y].IsAttackable)
            {
                ClearTiles();
                StartCoroutine(
                    AttackEnemy(x, y, _selectedCharacter.GetComponent<Character>().characterType)
                );
            }
            else
            {
                ClearTiles();
                Tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;
            }

            return;
        }
        // else
        ClearTiles();

        Tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;

        attackButton.SetActive(true);
        moveButton.SetActive(true);
        healthText.gameObject.SetActive(true);
        jobText.gameObject.SetActive(true);

        var chars = _isEnemyTurn ? Enemies : Characters;

        // enable collider and make opaque for all character except the newly selected one
        foreach (var character in chars)
        {
            if (character == null) continue;
            character.GetComponent<CapsuleCollider>().enabled = true;
            MakeCharacterOpaque(character);
        }

        _selectedCharacter = _isEnemyTurn ? Enemies[x, y] : Characters[x, y];
        var characterType = _selectedCharacter.GetComponent<Character>().characterType;

        healthText.text = "Health: " + _selectedCharacter.GetComponent<Character>().health;
        jobText.text = "Job: " + characterType;

        var moveDirections = characterType switch
        {
            CharacterType.Warrior => new[,]
            {
                { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
                //
                { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
                //
                { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
            },
            CharacterType.Gunner => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
            _ => null
        };
        // attack directions
        var attackDirections = characterType switch
        {
            CharacterType.Warrior => new[,] { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } },
            CharacterType.Gunner => new[,]
            {
                { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 },
                //
                { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 },
                //
                { 2, 0 }, { -2, 0 }, { 0, 2 }, { 0, -2 }
            },
            _ => null
        };

        var directions = _actionType == ActionType.Move ? moveDirections : attackDirections;

        if (directions != null)
            for (var i = 0; i < directions.GetLength(0); i++)
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
                            _actionType == ActionType.Move
                            && !Grid[x + directions[i, 0] - 1, y + directions[i, 1]].IsWalkable
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
                            _actionType == ActionType.Move
                            && !Grid[x + directions[i, 0] + 1, y + directions[i, 1]].IsWalkable
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
                            _actionType == ActionType.Move
                            && !Grid[x + directions[i, 0], y + directions[i, 1] - 1].IsWalkable
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
                            _actionType == ActionType.Move
                            && !Grid[x + directions[i, 0], y + directions[i, 1] + 1].IsWalkable
                        )
                            continue;
                    }
                }

                var newX = x + directions[i, 0];
                var newY = y + directions[i, 1];
                if (newX < 0 || newX >= width || newY < 0 || newY >= height)
                    continue;
                // if (grid[newX, newY].isWalkable) continue;
                if (Characters[newX, newY] != null)
                {
                    if (_isEnemyTurn && _actionType == ActionType.Attack)
                    {
                        Tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
                        Grid[newX, newY].IsAttackable = true;
                    }

                    continue;
                }

                if (Obstacles[newX, newY] != null)
                    continue;
                if (Enemies[newX, newY] != null)
                {
                    if (!_isEnemyTurn && _actionType == ActionType.Attack)
                    {
                        Tiles[newX, newY].GetComponent<MeshRenderer>().material = enemyTileMaterial;
                        Grid[newX, newY].IsAttackable = true;
                    }

                    continue;
                }

                Tiles[newX, newY].GetComponent<MeshRenderer>().material =
                    _actionType == ActionType.Move ? walkableTileMaterial : attackableTileMaterial;
                Grid[newX, newY].IsWalkable = _actionType == ActionType.Move;
                Grid[newX, newY].IsAttackable = _actionType == ActionType.Attack;
            }

        // make selected character half transparent
        MakeCharacterTransparent(_selectedCharacter);

        // disable character collider isTrigger
        _selectedCharacter.GetComponent<CapsuleCollider>().enabled = false;
    }

    private IEnumerator AttackEnemy(int x, int y, CharacterType characterType)
    {
        var enemyChars = _isEnemyTurn ? Characters : Enemies;
        // Debug.Log("Start attacking");
        var enemy = _isEnemyTurn
            ? Characters[x, y].GetComponent<Character>()
            : Enemies[x, y].GetComponent<Character>();
        enemy.health -= _selectedCharacter.GetComponent<Character>().damage;
        // Debug.Log("Enemy health: " + enemy.health);

        // Debug.Log("Attacking enemy at (" + x + "," + y + ")");
        // play particle effect and sound when attacking enemy on grid and wait a few hundred milliseconds
        {
            _audioSource.PlayOneShot(characterType == CharacterType.Gunner ? gunSound : swordSound);

            yield return new WaitForSeconds(characterType == CharacterType.Gunner ? 0.5f : 0.1f);

            Instantiate(
                characterType == CharacterType.Warrior ? warriorHitParticle : gunnerHitParticle,
                new Vector3(Grid[x, y].Position.x, 0.01f, Grid[x, y].Position.z),
                Quaternion.identity
            );

            if (enemy.health <= 0)
            {
                if (_isEnemyTurn)
                {
                    Destroy(Characters[x, y]);
                    Characters[x, y] = null;
                }
                else
                {
                    Destroy(Enemies[x, y]);
                    Enemies[x, y] = null;
                }
                // Debug.Log("Enemy destroyed");

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
                    if (_isEnemyTurn)
                    {
                        _playerLose = true;
                    }
                    else
                    {
                        _enemyLose = true;
                    }
                }
            }
            healthText.text = "Health: " + enemy.health;
            _audioSource.PlayOneShot(hurtSound);
            // yield return new WaitForSeconds(0.35f);
        }
        _isEnemyTurn = !_isEnemyTurn;
        // // Debug.Log("Updated health text: " + healthText.text);
        // StartCoroutine(EnemyTurn());
    }

    // select tile on grid
    public void SelectTile(int x, int y)
    {
        if (Characters[x, y] != null || Enemies[x, y] != null)
        {
            SelectCharacter(x, y);
            return;
        }
        attackButton.SetActive(false);
        moveButton.SetActive(false);
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);

        var isWalkable = Grid[x, y].IsWalkable;

        // move character transform to position of tile
        if (_selectedCharacter != null && isWalkable)
        {
            _audioSource.PlayOneShot(walkSound);
            _selectedCharacter.GetComponent<CapsuleCollider>().enabled = true;
            // move character
            // TODO: animate character move
            var posX = Grid[x, y].Position.x;
            var posY = Grid[x, y].Position.z;
            _selectedCharacter.transform.position = new Vector3(
                posX,
                _selectedCharacter.transform.position.y,
                posY
            );
            var oldX = _selectedCharacter.GetComponent<Character>().x;
            var oldY = _selectedCharacter.GetComponent<Character>().y;

            var chars = _isEnemyTurn ? Enemies : Characters;

            chars[x, y] = chars[oldX, oldY];
            chars[oldX, oldY] = null;

            chars[x, y].GetComponent<Character>().x = x;
            chars[x, y].GetComponent<Character>().y = y;

            if (_isEnemyTurn)
                Enemies = chars;
            else
                Characters = chars;

            MakeCharacterOpaque(_selectedCharacter);
            _selectedCharacter = null;
            // start enemy turn
            _isEnemyTurn = !_isEnemyTurn;
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
        foreach (var character in Characters)
        {
            if (character == null) continue;
            character.GetComponent<CapsuleCollider>().enabled = true;
            MakeCharacterOpaque(character);
        }
        foreach (var enemy in Enemies)
        {
            if (enemy == null) continue;
            enemy.GetComponent<CapsuleCollider>().enabled = true;
            MakeCharacterOpaque(enemy);
        }
    }

    private IEnumerator EnemyTurn()
    {
        turnText.text = "Enemy Turn";

        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);
        moveButton.SetActive(false);
        attackButton.SetActive(false);
        _isEnemyTurn = true;
        // Debug.Log("Enemy Turn");
        ClearTiles();

        // prevent anything from selectable
        foreach (var character in Characters)
        {
            if (character != null)
            {
                character.GetComponent<CapsuleCollider>().enabled = false;
            }
        }

        var newEnemies = new GameObject[Enemies.Length];
        var count = 0;
        foreach (var enemy in Enemies)
        {
            if (enemy == null) continue;
            newEnemies[count] = enemy;
            count++;
        }

        if (count == 0)
        {
            _enemyLose = true;
        }

        // enemy AI
        if (count != 0)
        {
            var randomNumber = Random.Range(0, count);
            GameObject enemy = newEnemies[randomNumber];
            Character enemyCharacter = enemy.GetComponent<Character>();
            // wait for 0.1 second
            yield return new WaitForSeconds(0.1f);

            var x = enemyCharacter.x;
            var y = enemyCharacter.y;
            ClearTiles();
            Tiles[x, y].GetComponent<MeshRenderer>().material = selectedTileMaterial;

            healthText.gameObject.SetActive(true);
            jobText.gameObject.SetActive(true);
            healthText.text = "Health: " + enemyCharacter.GetComponent<Character>().health;
            jobText.text = "Enemy\nJob: " + enemyCharacter.GetComponent<Character>().characterType;

            // wait 1 second
            yield return new WaitForSeconds(0.2f);
        }

        // end enemy turn
        turnText.text = "Player Turn";
        _isEnemyTurn = false;
        ClearTiles();
        healthText.gameObject.SetActive(false);
        jobText.gameObject.SetActive(false);
        // Debug.Log("Player Turn");
        MakeAllCharactersOpaque();
    }

    public void HandleChangeAction(ActionType actionType)
    {
        this._actionType = actionType;
        if (_selectedCharacter != null)
        {
            // Reselect character. The function handles the rest/
            SelectCharacter(
                _selectedCharacter.GetComponent<Character>().x,
                _selectedCharacter.GetComponent<Character>().y
            );
        }
    }

    private void MakeCharacterTransparent(GameObject character)
    {
        // Create a new material
        Material newMat = new Material(character.GetComponent<Renderer>().material);
        newMat.SetFloat(Mode, 3);
        newMat.SetInt(SrcBlend, (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
        newMat.SetInt(DstBlend, (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
        newMat.SetInt(ZWrite, 0);
        newMat.DisableKeyword("_ALPHATEST_ON");
        newMat.EnableKeyword("_ALPHABLEND_ON");
        newMat.DisableKeyword("_ALPHAPREMULTIPLY_ON");
        newMat.renderQueue = 3000;
        // Get the current color of the material
        var currentColor = newMat.color;

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
        var newMat = new Material(character.GetComponent<Renderer>().material);

        // Get the current color of the material
        var currentColor = newMat.color;

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
        // Debug.Log("Tiles Cleared");
        for (var i = 0; i < width; i++)
        {
            for (var j = 0; j < height; j++)
            {
                Tiles[i, j].GetComponent<MeshRenderer>().material = unwalkableTileMaterial;
                Grid[i, j].IsWalkable = false;
                Grid[i, j].IsAttackable = false;
            }
        }
    }
}
