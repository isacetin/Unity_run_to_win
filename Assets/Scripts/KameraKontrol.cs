using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraKontrol : MonoBehaviour
{
    public Transform player;
    Vector3 uzaklık = new Vector3(0,2,-5 );

    // Update is called once per frame
    void Update()
    {
        transform.position = player.position + uzaklık;
    }
}
