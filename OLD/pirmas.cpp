/*
Sukurta: 09:53 12 10 2021

pirmas 4 variantas
*/

#include <bits/stdc++.h>
using namespace std;

// Randa maziausia
int Geriausias(int suviai[5])
{
    int geriausias = suviai[0];
    for (int i = 0; i < 5; i++)
    {
        int dabartinis = suviai[i];
        if (geriausias > dabartinis)
        {
            geriausias = dabartinis;
        }
    }
    return geriausias;
}

// Randa ar geriausias maziausias
string Tikrinimas(int kiekReikia, int geriausias)
{
    if (geriausias > kiekReikia)
    {
        return "NEPAKANKA";
    }
    return "PAKANKA";
}

int main()
{
    ifstream fr("variantas4_1.txt");
    ofstream fo("variantas4_1rez.txt");

    int n, r, nr, ger;

    int suviai[5];

    fr >> n >> r;

    for (int i = 0; i < n; i++)
    {
        fr >> nr;
        for (int y = 0; y < 5; y++)
        {
            fr >> suviai[y];
        }
        ger = Geriausias(suviai);
        fo << nr << " " << ger << " " << Tikrinimas(r, ger) << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
