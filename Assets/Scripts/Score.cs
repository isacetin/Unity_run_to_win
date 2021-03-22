using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.XR;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Score : MonoBehaviour
{
    public Transform player;
    public Text scoreText;
    public int highScore;
    public Text HighScoreText;

    private void Awake()
    {
        HighScoreText.text = PlayerPrefs.GetInt("puan").ToString();
    }

    void Update()
    {
        
       scoreText.text = player.position.z.ToString("0");
       highScore = int.Parse(scoreText.text);
        if(highScore > PlayerPrefs.GetInt("puan"))
        {
            PlayerPrefs.SetInt("puan", highScore);
        }
       
       

    }
}
