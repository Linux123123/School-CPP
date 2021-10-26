/*
Sukurta: 10:10 26 10 2021

gyventojai
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, nr, gyvNam,
        visoGyv = 0,
        gyvKiekKai = 0,
        gyvKiekDes = 0;

    double gyvDes = 0,
           gyvKai = 0;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> nr >> gyvNam;
        visoGyv += gyvNam;
        if (nr % 2 == 0)
        {
            gyvKiekDes++;
            gyvDes += gyvNam;
        }
        else
        {
            gyvKiekKai++;
            gyvKai += gyvNam;
        }
    }

    fo << visoGyv << endl;
    fo << gyvKai << endl;
    fo << gyvDes << endl;
    fo << setw(4) << fixed << setprecision(2)
       << gyvKai / gyvKiekKai << endl;

    fo << setw(4) << fixed << setprecision(2)
       << gyvDes / gyvKiekDes;

    fr.close();
    fo.close();
    return 0;
}
