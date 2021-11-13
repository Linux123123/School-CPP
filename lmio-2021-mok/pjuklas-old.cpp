/*
Sukurta: 10:04 12 11 2021

pjuklas
*/

#include <bits/stdc++.h>
using namespace std;

bool arPjuklas(int v, int d, bool sekaMaz)
{
    if (sekaMaz)
    {
        if (v < d)
        {
            return true;
        }
    }
    else
    {
        if (v > d)
        {
            return true;
        }
    }
    return false;
}

bool surikiuoti(vector<int> &skaiciai, bool sekaMaz)
{
    bool pradineSeka = sekaMaz;
    for (long unsigned int i = 0; i < skaiciai.size(); i++)
    {
        if (i != 0)
            sekaMaz = !sekaMaz;
        int des = skaiciai[i + 1];
        int vid = skaiciai[i];
        int kai = skaiciai[i - 1];

        if (des == 0)
            continue;

        if (!arPjuklas(vid, des, sekaMaz))
        {
            if (arPjuklas(des, vid, sekaMaz))
            {
                skaiciai[i] = des;
                skaiciai[i + 1] = vid;
            }
        }
        if (!arPjuklas(kai, vid, sekaMaz))
        {
            if (kai != 0 && arPjuklas(vid, kai, !sekaMaz))
            {
                skaiciai[i] = kai;
                skaiciai[i - 1] = vid;
            }
        }
    }

    sekaMaz = pradineSeka;

    for (long unsigned int i = 0; i < skaiciai.size(); i++)
    {

        int des = skaiciai[i + 1];
        int vid = skaiciai[i];
        if (arPjuklas(vid, des, sekaMaz) == false)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    vector<int> skaiciai;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int sk;
        scanf("%d", &sk);
        skaiciai.push_back(sk);
    }

    vector<int> pradiniai = skaiciai;

    if (!surikiuoti(skaiciai, false))
    {
        skaiciai = pradiniai;
        surikiuoti(skaiciai, true);
    }

    for (int i = 0; i < n; i++)
    {
        int sk = skaiciai[i];
        cout << sk;
    }

    return 0;
}
