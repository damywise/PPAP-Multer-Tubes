using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ActionButton : MonoBehaviour
{
    public ActionType actionType;
    private Button button;
    // Start is called before the first frame update
    void Start()
    {
        button = GetComponent<Button>();
        button.onClick.AddListener(OnClick);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClick() {

    }
}
