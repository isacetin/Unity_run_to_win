using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SetVolume : MonoBehaviour
{
    public AudioMixer mixer;

    public Slider slider;
    public float SliderValue;
    public void Start()
    {
        slider.value = PlayerPrefs.GetFloat("save",SliderValue);
    }
    public void setLevel(float sliderValue)
    {
        mixer.SetFloat("MusicVol", Mathf.Log10(sliderValue) * 20);
    }

    public void ChangeSlider(float value)
    {
        SliderValue = value;
        PlayerPrefs.SetFloat("save",SliderValue);
    }

}
