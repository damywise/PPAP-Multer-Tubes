using UnityEngine;

public enum CharacterType
{
    Warrior,
    Gunner
}

public class Character : MonoBehaviour
{
    public int x;
    public int y;
    public int health = 100;
    public int maxHealth = 100;
    public int damage = 50;

    public CharacterType characterType;

    private GameController _gameController;

    // Start is called before the first frame update
    void Start()
    {
        _gameController = FindObjectOfType<GameController>();
    }

    private void OnMouseDown()
    {
        _gameController.SelectCharacter(x, y);
    }
}
