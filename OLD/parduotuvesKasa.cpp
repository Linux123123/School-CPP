/*
Sukurta: 10:08 19 10 2021

parduotuvesKasa
*/

#include <bits/stdc++.h>
using namespace std;

void graza(int lt, double ct, int ns, int &grazaLt, double &grazaCt)
{
    grazaLt = floor(ns - lt - ct / 100);
    grazaCt = (1 - ct / 100) * 100;
}

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, lt, ct, ns, grazaLt;
    double grazaCt;

    fr >> n;

    for (int i = 0; i < n; i++)
    {

        fr >> lt >> ct >> ns;
        graza(lt, ct, ns, grazaLt, grazaCt);
        fo << grazaLt << " Lt " << grazaCt << " ct" << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
