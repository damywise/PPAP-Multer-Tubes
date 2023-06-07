using UnityEngine;
using UnityEngine.UI;

public class ActionButton : MonoBehaviour
{
    public ActionType actionType;
    private Button _button;
    private GridManager _gridManager;

    // Start is called before the first frame update
    void Start()
    {
        _gridManager = FindObjectOfType<GridManager>();
        _button = GetComponent<Button>();
        _button.onClick.AddListener(OnClick);
    }

    public void OnClick()
    {
        _gridManager.HandleChangeAction(actionType);
    }
}
