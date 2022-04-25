/*
Sukurta: 12:34 18 10 2021

degalai
*/

#include <bits/stdc++.h>
using namespace std;

void gerVid(double &ger, double &suma, int &gerNr, double sana[][2], int n)
{
    ger = sana[0][0] * 100 / sana[0][1];
    suma += ger;
    gerNr = 1;

    for (int i = 1; i < n; i++)
    {
        double perSimt = sana[i][0] * 100 / sana[i][1];
        suma += perSimt;
        if (perSimt < ger)
        {
            gerNr = i + 1;
            ger = perSimt;
        }
    }
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, gerNr;

    fr >> n;

    double ger, suma = 0, sana[n][2];

    for (int i = 0; i < n; i++)
    {
        fr >> sana[i][0] >> sana[i][1];
    }

    gerVid(ger, suma, gerNr, sana, n);

    fo << gerNr << " " << setw(2) << fixed << setprecision(1) << ger << " l/100 km" << endl;
    fo << setw(2) << fixed << setprecision(1) << suma / n << " l/100 km";
    fr.close();
    fo.close();
    return 0;
}
