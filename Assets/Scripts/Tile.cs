using UnityEngine;

public class Tile : MonoBehaviour
{
    public int x;
    public int y;
    private GridManager _gridManager;

    // Start is called before the first frame update
    void Start()
    {
        _gridManager = FindObjectOfType<GridManager>();
    }

    private void OnMouseDown()
    {
        _gridManager.SelectTile(x, y);
    }
}
