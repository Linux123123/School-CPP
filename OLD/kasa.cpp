/*
Sukurta: 10:04 12 04 2022

kasa
*/

#include <bits/stdc++.h>
using namespace std;

void graza(int k1, int k2, int d, int &g1, int &g2)
{
    g1 = d - k1;
    if (k2 > 0)
    {
        g1--;
        g2 = 100 - k2;
    }
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, k1, k2, d, g1, g2 = 0;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> k1 >> k2 >> d;
        graza(k1, k2, d, g1, g2);
        fo << g1 << " Lt " << g2 << " ct" << endl;
        g1 = 0;
        g2 = 0;
    }

    fr.close();
    fo.close();
    return 0;
}
