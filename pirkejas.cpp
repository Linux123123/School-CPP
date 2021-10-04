// pirkejas

#include <bits/stdc++.h>
using namespace std;

int daugPrekiu(vector<int> pirkejai)
{
    int max = 0;
    int eilNr;
    for (int i = 0; i < pirkejai.size(); i++)
    {
        if (pirkejai[i] > max)
        {
            max = pirkejai[i];
            eilNr = i;
        }
    }
    return eilNr;
}

int laikasKasoje(int prekiuSk, int vienaPrekeT, int atsiskaitymasT) {
    int laikas = prekiuSk * vienaPrekeT + atsiskaitymasT;
    return laikas;
}

int laikasKasojeEil(int nr, int vienaPrekeT, int atsiskaitymasT, vector<int> pirkejai)
{
    int suma = 0;
    for (int i = 0; i < nr + 1; i++)
    {
        suma += laikasKasoje(pirkejai[i], vienaPrekeT, atsiskaitymasT);
    }
    return suma;
}

int main()
{
    ifstream fd("DUOM.txt");
    ofstream fr("REZ.txt");

    int t1, t2, n, p;

    vector<int> pirkejai;

    fd >> t1 >> t2 >> n;

    for (int i = 0; i < n; i++)
    {
        fd >> p;
        pirkejai.push_back(p);
    }

    int daugPrekNr = daugPrekiu(pirkejai);
    int daugPrekiuSk = pirkejai[daugPrekNr];
    int laikas = laikasKasojeEil(daugPrekNr, t1, t2, pirkejai);

    fr << daugPrekNr + 1 << endl;
    fr << daugPrekiuSk << endl;
    fr << laikas << endl;
    fr << laikasKasoje(daugPrekiuSk, t1, t2) << endl;

    fd.close();
    fr.close();
    return 0;
}
