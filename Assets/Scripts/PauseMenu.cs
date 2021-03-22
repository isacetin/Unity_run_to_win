using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPause = false;
    public GameObject pauseMenuUI;
    bool isMuted;

    public Button musicButton;
    public Texture musicOnSprite;
    public Texture musicOffSprite;

    public void Start()
    {
        isMuted = PlayerPrefs.GetInt("Muted") == 1;
        AudioListener.pause = isMuted;
        if(isMuted == true)
        {
            musicButton.GetComponent<RawImage>().texture = musicOffSprite;
        }
        else if(isMuted ==false)
        {
            musicButton.GetComponent<RawImage>().texture = musicOnSprite;
        }

    }

    public void PauseButton()
    {
            if (GameIsPause)
            {
                Resume();
            }
            else
            {
                Pause();
            }
    }

    public void SoundOnButton()
    {
        if (isMuted == false)
        {
            musicButton.GetComponent<RawImage>().texture = musicOffSprite;
        }
        else
        {
            musicButton.GetComponent<RawImage>().texture = musicOnSprite;
        }
        isMuted = !isMuted;
        AudioListener.pause = isMuted;
        PlayerPrefs.SetInt("Muted", isMuted ? 1 : 0);
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        GameIsPause = false;
    }

    public void Pause()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        GameIsPause = true;
    }
    public void LoadMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("Menu");
    }
    public void QuıtGame()
    {
        Application.Quit();
    }

}
