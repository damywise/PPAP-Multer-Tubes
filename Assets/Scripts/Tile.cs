using UnityEngine;

public class Tile : MonoBehaviour
{
    public int x;
    public int y;
    private GameController _gameController;

    // Start is called before the first frame update
    void Start()
    {
        _gameController = FindObjectOfType<GameController>();
    }

    private void OnMouseDown()
    {
        _gameController.SelectTile(x, y);
    }
}
