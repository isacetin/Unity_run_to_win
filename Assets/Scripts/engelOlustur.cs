using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class engelOlustur : MonoBehaviour
{
    public GameObject engel;
    public Transform player;

    float silinme_zamanı = 5.0f;
    float sag_X_koordinat = -8.0f;
    float sol_X_korrdinat = 13.0f;
    void Start()
    {
        InvokeRepeating("nesne_klonla", 0, 0.5f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void nesne_klonla(GameObject engel,float Y_koordinat)
    {
        GameObject yeni_klon = Instantiate(engel);
        int rastsayi = Random.Range(0, 100);
        if(rastsayi <50)
        {
            yeni_klon.transform.position = new Vector3(sag_X_koordinat, Y_koordinat, player.position.z + 20.0f);
        }
        if (rastsayi > 50)
        {
            yeni_klon.transform.position = new Vector3(sol_X_korrdinat, Y_koordinat, player.position.z + 20.0f);
        }
        Destroy(yeni_klon, silinme_zamanı);
    }
}
