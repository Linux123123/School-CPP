/*
Sukurta: 12:22 25 10 2021

kelione
*/

#include <bits/stdc++.h>
using namespace std;

class Kaina
{
public:
    int kaina9;
    int kaina19;
    int kaina30;
    Kaina(const int &x, const int &y, const int &z)
    {
        kaina9 = x;
        kaina19 = y;
        kaina30 = z;
    };
    int apskaiciuoti(int zmo)
    {
        if (zmo < 10)
        {
            return zmo * kaina9;
        }
        else if (zmo < 20)
        {
            return zmo * kaina19;
        }
        else
        {
            return zmo * kaina30;
        }
    };
};

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, a, b, x, y, z;
    double visuKaina;

    fr >> n >> a >> b >> x >> y >> z;

    Kaina kaina(x, y, z);

    fo << kaina.apskaiciuoti(n) << " ";
    fo << kaina.apskaiciuoti(a) << " ";
    fo << kaina.apskaiciuoti(b) << endl;
    visuKaina = kaina.apskaiciuoti(n + 4);
    fo << visuKaina << endl;
    fo << setw(5) << fixed << setprecision(2) << visuKaina / n;

    fr.close();
    fo.close();
    return 0;
}
