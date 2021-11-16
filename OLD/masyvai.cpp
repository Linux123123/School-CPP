/*
Sukurta: 10:01 16 11 2021

masyvai
*/

#include <bits/stdc++.h>
using namespace std;

int rastiVieta(const int skaiciai[], int n, int key)
{
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (skaiciai[i] == key)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, suma = 0, did, maz;

    fr >> n;

    int skaiciai[n];

    for (int i = 0; i < n; i++)
    {
        fr >> skaiciai[i];
        fo << skaiciai[i] << " ";
    }

    fo << endl;

    for (int i = 0; i < n; i++)
    {
        suma += skaiciai[i];
    }

    did = *max_element(skaiciai, skaiciai + n);
    maz = *min_element(skaiciai, skaiciai + n);

    int mazVieta = rastiVieta(skaiciai, n, maz);
    int didVieta = rastiVieta(skaiciai, n, did);

    fo << "Elementu suma: " << suma << endl;
    fo << "Didziausias elementas yra " << did << ", tai yra "
       << didVieta << "-as masyvo elementas," << endl;
    fo << "Maziausias elementas yra " << maz << ", tai yra "
       << mazVieta << "-as masyvo elementas" << endl;

    swap(skaiciai[mazVieta], skaiciai[didVieta]);

    for (int i = 0; i < n; i++)
    {
        fo << skaiciai[i] << " ";
    }

    fr.close();
    fo.close();
    return 0;
}
