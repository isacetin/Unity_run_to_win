using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderTextScript : MonoBehaviour
{
    Text percentageText;

    // Start is called before the first frame update
    void Start()
    {
        percentageText = GetComponent<Text>();
        percentageText.text = Mathf.RoundToInt(PlayerPrefs.GetFloat("totalValue") * 100) + "%";
        
    }

    public void textUpdate(float value)
    {
        percentageText.text = Mathf.RoundToInt(value * 100) + "%";
        PlayerPrefs.SetFloat("totalValue",value);
    }
}
