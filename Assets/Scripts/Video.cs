using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Video : MonoBehaviour
{
    private void Start()
    {
        // add listener
        GetComponent<Button>().onClick.AddListener(OnPointerClick);
    }

    void OnPointerClick()
    {
        Debug.Log("Called");
        SceneManager.LoadScene("Game");
    }
}
