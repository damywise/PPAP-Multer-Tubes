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

    private GridManager _gridManager;

    // Start is called before the first frame update
    void Start()
    {
        _gridManager = FindObjectOfType<GridManager>();
    }

    private void OnMouseDown()
    {
        _gridManager.SelectCharacter(x, y);
    }
}
