/*
Sukurta: 09:45 30 11 2021

miegas
*/

#include <bits/stdc++.h>
using namespace std;

bool priklauso(vector<int> arr1, vector<int> arr2)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < arr2.size(); i++)
    {
        for (j = 0; j < arr1.size(); j++)
        {
            if (arr2[i] == arr1[j])
                break;
        }

        if (j == arr1.size())
            return 0;
    }
    return 1;
}

int kombinuoti(int a, int b)
{
    int kartai = 1;
    while (kartai <= b)
        kartai *= 10;
    return a * kartai + b;
}

vector<int> laikas(int min)
{
    vector<int> skaiciai;

    int val = floor(min / 60);
    int likMin = min - (val * 60);

    skaiciai.push_back(val / 10 % 10);
    skaiciai.push_back(val % 10);

    skaiciai.push_back(likMin / 10 % 10);
    skaiciai.push_back(likMin % 10);

    return skaiciai;
}

int main()
{
    int n, min, valPirmIn, valAntrIn, minPirmIn, minAntrIn;

    vector<int> skaiciai;

    cin >> valPirmIn >> valAntrIn >> minPirmIn >> minAntrIn;

    min = kombinuoti(valPirmIn, valAntrIn) * 60 +
          kombinuoti(minPirmIn, minAntrIn);

    if (min == 0) min = 1439;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int sk;
        cin >> sk;
        skaiciai.push_back(sk);
    }

    vector<int> galutLaikas;

    for (int i = min; i > 0; i--)
    {
        vector<int> galimasLaikas = laikas(i);
        if (priklauso(skaiciai, galimasLaikas))
        {
            galutLaikas = galimasLaikas;
            break;
        }
    }

    for (int i = 0; i < galutLaikas.size(); i++)
    {
        cout << galutLaikas[i] << " ";
    }
    return 0;
}
