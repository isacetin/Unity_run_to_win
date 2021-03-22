using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class karakterkontrol2 : MonoBehaviour
{
    public karakterKontrol yürüme;
    Animator anim;

     AudioSource carpisma;

    void Start()
    {
        anim = GetComponent<Animator>();
        carpisma = GetComponent<AudioSource>();
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.tag == "Engel")
        {
            carpisma.Play();
            yürüme.enabled = false;
            anim.SetBool("carptı", true);

            FindObjectOfType<gameManager>().endGame();     
        }
    }

}
