using System;
using UnityEngine;
using UnityEngine.UI;

public class karakterKontrol : MonoBehaviour
{

    Rigidbody fizik;
    int ilerihiz = 25;
    int yanahiz = 15;
    public Transform yol1;
    public Transform yol2;
    bool saga = false;
    bool sola = false;

    void Start()
    {
        //Physics.IgnoreLayerCollision(8, 9);
        fizik = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
         transform.position += new Vector3(0, 0, (ilerihiz) * Time.deltaTime);
         Vector3 playerPos = transform.position;
         playerPos.x = Mathf.Clamp(playerPos.x, -5.5f, 5.5f);
         transform.position = playerPos;
        if (saga)
        {
            transform.position += new Vector3(yanahiz * Time.deltaTime, 0, 0);
        }
        if(sola)
        {
            transform.position += new Vector3(-(yanahiz) * Time.deltaTime, 0, 0);
        }
        if (fizik.position.y < -1f)
        {
            FindObjectOfType<gameManager>().endGame();
        }
       
    }
    private void OnTriggerEnter(Collider other)
    {

        if(other.gameObject.name == "SON_1")
        {
            yol2.position = new Vector3(yol1.position.x, yol1.position.y, yol1.position.z + 92.5f);
        }
        if (other.gameObject.name == "SON_2")
        {
            yol1.position = new Vector3(yol2.position.x, yol2.position.y, yol2.position.z + 92.5f);
        }

    }

    public void saga_gıt()
    {
        saga = true;
    }
    public void saga_gıtme()
    {
        saga = false;
    }
    public void sola_gıt()
    {
        sola = true;
    }
    public void sola_gıtme()
    {
        sola = false;
    }

}


