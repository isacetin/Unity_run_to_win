using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameSound : MonoBehaviour
{
    private static gameSound obje = null;

    private void Awake()
    {
        if(obje ==null)
        {
            obje = this;
            DontDestroyOnLoad(this);

        }
        else if (this != obje )
        {
            Destroy(gameObject);
        }
    }


}
