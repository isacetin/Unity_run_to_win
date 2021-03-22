using UnityEngine.SceneManagement;
using UnityEngine;

public class MainMenu : MonoBehaviour
{
       
    public Material day;
    public Material night;
    void Start()
    {
        if (PlayerPrefs.GetInt("gunler") == 1)
        {
            RenderSettings.skybox = day;
        }
        else
        {
            RenderSettings.skybox = night;

        }
    }
     public void PlayGame()
    {
        SceneManager.LoadScene("SampleScene");
    }
    public void QuıtGame()
    {
        Application.Quit();
    }
    public void OptionsGame()
    {
        SceneManager.LoadScene("Options");
    }
    public void menuLoad()
    {
        SceneManager.LoadScene("Menu");
    }


    public void SkyChangeDay()
    {
        RenderSettings.skybox = day;
        PlayerPrefs.SetInt("gunler",1);
    }
    public void SkyChangeNight()
    {
        RenderSettings.skybox = night;
        PlayerPrefs.SetInt("gunler", 2);
    }
    

}
