using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class TitleScreenButtons : MonoBehaviour
{
    private GameController _gameController;
    public int width;
    public int height;
    public bool startButton;
    public TextMeshProUGUI selectText;

    // Start is called before the first frame update
    void Start()
    {
        _gameController = FindObjectOfType<GameController>();
        var button = GetComponent<Button>();
        button.onClick.AddListener(OnClick);
    }

    public void OnClick()
    {
        if (startButton)
        {
            _gameController.StartGame();
        }
        else
        {
            selectText.text = "Choose level size: " + width + "x" + height;
            _gameController.width = width;
            _gameController.height = height;
        }
    }
}