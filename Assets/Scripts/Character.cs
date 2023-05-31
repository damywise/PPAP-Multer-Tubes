using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{

    public int x;
    public int y;
    public int health = 100;
    public int maxHealth = 100;
    public int damage = 10;
    public int attackRange = 1;
    public int moveRange = 1;

    private GridManager gridManager;

    // Start is called before the first frame update
    void Start()
    {
        gridManager = FindObjectOfType<GridManager>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnMouseDown() {        
        gridManager.SelectCharacter(x, y);
    }

    private void OnMouseEnter() {
        
    }

    private void OnMouseExit() {
        
    }
}