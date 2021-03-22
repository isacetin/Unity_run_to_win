using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds;
using GoogleMobileAds.Api;

public class Reklam : MonoBehaviour
{

    private BannerView bannerView;
    public int count = 1;
    void Start()
    {
        MobileAds.Initialize(initStatus => { });

        this.RequestBanner();
    }

    private void RequestBanner()
    {
            #if UNITY_ANDROID
                    string adUnitId = "ca-app-pub-3940256099942544/6300978111";
            #elif UNITY_IPHONE
                        string adUnitId = "ca-app-pub-3940256099942544/2934735716";
            #else
                        string adUnitId = "unexpected_platform";
            #endif

        // Create a 320x50 banner at the top of the screen.
        this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Top);
        AdRequest request = new AdRequest.Builder().Build();

        // Load the banner with the request.
        this.bannerView.LoadAd(request);
        bannerView.Show();
    }

}
