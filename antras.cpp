/*
Sukurta: 10:17 12 10 2021

antras
*/

#include <bits/stdc++.h>
using namespace std;

int kitasSkaicius(int dabartinis)
{
    string skStr = to_string(dabartinis) + to_string(dabartinis + 1);
    return atoi(skStr);
}

int Demuo(int sk)
{
    int suma = 1;
    for (int i = 2; i < sk; i++)
    {
        suma += kitasSkaicius(i);
    }
    return suma;
}

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n;

    fr >> n;

    fo << Demuo(n) << endl;

    fr.close();
    fo.close();
    return 0;
}
