#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int ilgis, n;
    float benzSim, dujSim, k1, k2, litruBenzSim, litruDujuSim;

    fr >> benzSim >> dujSim >> ilgis >> n;

    litruBenzSim = benzSim / 100 * ilgis;
    litruDujuSim = dujSim / 100 * ilgis;

    for (int i = 0; i < n; i++)
    {
        fr >> k1 >> k2;
        fo << setprecision(2) << fixed << litruBenzSim * k1 << " "
           << setprecision(2) << fixed << litruDujuSim * k2 << endl;
    }



    fr.close();
    fo.close();
}
