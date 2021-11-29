/*
Sukurta: 12:11 29 11 2021

konteineriai
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int gamint, konteiDyd;

    vector<int> gaminiai;

    fr >> gamint >> konteiDyd;

    for (int i = 0; i < gamint; i++)
    {
        int gaminys;
        fr >> gaminys;
        gaminiai.push_back(gaminys);
    }

    // for (size_t i = 0; i < gaminiai.size(); i++)
    // {
    //     cout << gaminiai[i] << endl;
    // }

    int kiekKokiuKont[konteiDyd];

    for (int i = 0; i < konteiDyd; i++)
    {
        kiekKokiuKont[i] = 0;
    }

    int konteineriuViso = 0;
    for (int i = 0; i < gaminiai.size(); i++)
    {
        float gaminys = gaminiai[i];
        float konteiNeriu = gaminys / konteiDyd;
        konteineriuViso += ceil(konteiNeriu);
        int pilnuKontGaminiui = floor(konteiNeriu);
        kiekKokiuKont[0] += pilnuKontGaminiui;
        int nepilnoSk = gaminys - (pilnuKontGaminiui * konteiDyd);
        kiekKokiuKont[konteiDyd - nepilnoSk]++;
    }

    fo << konteineriuViso << endl;

    for (int i = 0; i < konteiDyd; i++)
    {
        fo << kiekKokiuKont[i] << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
