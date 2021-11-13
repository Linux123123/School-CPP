/*
Sukurta: 09:38 12 11 2021

piramide-vyr
*/

#include <bits/stdc++.h>
using namespace std;

int kiekAukstu(int &k)
{
    int aukstas = 0;
    while (true)
    {
        aukstas++;
        k -= aukstas;
        if (k < 0)
        {
            aukstas--;
            k += aukstas + 1;
            break;
        }
    }
    return aukstas;
}

int main()
{
    int k;
    scanf("%d", &k);

    while (k > 0)
    {
        int aukstai = kiekAukstu(k);
        cout << aukstai << endl;
    }

    return 0;
}
