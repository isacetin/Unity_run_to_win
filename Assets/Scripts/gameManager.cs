using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class gameManager : MonoBehaviour
{
    public Material day;
    public Material night;

    bool gameHasEnded = false;
    public float restartDelay = 1f;
    public GameObject engel;
    
    public Transform player;

    float silinme_zamanı = 5.0f;
    float kordinat;

    public float btnTime;
    public Text btnR;
    public Text btnL;

    void Start()
    {
        if(PlayerPrefs.GetInt("gunler") == 1)
        {
            RenderSettings.skybox = day;
        }
        else{
            RenderSettings.skybox = night;

        } 
        InvokeRepeating("nesne_klonla", 0, 0.4f);
        
    }
    private void FixedUpdate()
    {
        btnTime = (int)(Time.time % 60f);
        if (btnTime >= 2)
        {
            btnText();
        }
        kordinat = Random.Range(-5.8f, 1.7f);
    }
    void btnText()
    {
        btnR.GetComponent<Text>().text = " ";
        btnL.GetComponent<Text>().text = " ";
    }
    void nesne_klonla()
    {
        klonla(engel);
    }
    void klonla(GameObject engel)
    {
        GameObject yeni_klon = Instantiate(engel);
        yeni_klon.transform.position = new Vector3(kordinat, 0, player.position.z + 75.0f);
        Destroy(yeni_klon, silinme_zamanı);
    }

    public void endGame()
    {
        if(gameHasEnded == false)
        {
            gameHasEnded = true;
            Invoke("restart",restartDelay);
        }
        
    }
    void restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }



}
