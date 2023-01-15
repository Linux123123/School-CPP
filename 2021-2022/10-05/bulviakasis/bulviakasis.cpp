/*
Sukurta: 09:52 05 10 2021

bulviakasis
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("DUOM1.txt");
    ofstream fo("REZ1.txt");

    int n, bul, vaziavKartu = 0;
    double bulVienuKartu;

    fr >> n >> bulVienuKartu;

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        fr >> bul;
        vaziavKartu += ceil(bul / bulVienuKartu);
        if (max < bul)
            max = bul;
    }

    fo << vaziavKartu << endl;
    fo << max << " " << ceil(max / bulVienuKartu);

    fr.close();
    fo.close();
    return 0;
}
