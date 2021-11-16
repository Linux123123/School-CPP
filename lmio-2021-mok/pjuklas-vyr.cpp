/*
Sukurta: 11:24 12 11 2021

pjuklas-1
*/

#include <bits/stdc++.h>
using namespace std;

bool surikiuoti(vector<int> &skaiciai, bool sekaMin)
{
    bool pjuklas = true;

    for (unsigned long int i = 0; i < skaiciai.size() - 1; i++)
    {
        int vid = skaiciai[i];
        int des = skaiciai[i + 1];

        if (sekaMin)
        {
            if (!(vid < des))
            {
                skaiciai[i] = des;
                skaiciai[i + 1] = vid;
            }
            if (!(skaiciai[i] < skaiciai[i + 1]))
            {
                pjuklas = false;
            }
        }
        else
        {
            if (!(vid > des))
            {
                skaiciai[i] = des;
                skaiciai[i + 1] = vid;
            }
            if (!(skaiciai[i] > skaiciai[i + 1]))
            {
                pjuklas = false;
            }
        }
        sekaMin = !sekaMin;
    }
    return pjuklas;
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

    vector<int> pradiniaiSk = skaiciai;

    if (!surikiuoti(skaiciai, true))
    {
        skaiciai = pradiniaiSk;
        surikiuoti(skaiciai, false);
    }

    for (int i = 0; i < n; i++)
    {
        int sk = skaiciai[i];
        cout << sk << " ";
    }

    return 0;
}
