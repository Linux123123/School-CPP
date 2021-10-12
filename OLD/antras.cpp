/*
Sukurta: 10:17 12 10 2021

antras
*/

#include <bits/stdc++.h>
using namespace std;

int kitasSkaicius(int dabartinis, int kelintas)
{
    string skStr = to_string(dabartinis) + to_string(kelintas + 1);
    return atoi(skStr.c_str());
}

int Demuo(int sk)
{
    int suma = 1;
    int dabar = 1;
    for (int i = 1; i < sk; i++)
    {
        dabar = kitasSkaicius(dabar, i);
        cout << dabar << endl;
        suma += dabar;
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
