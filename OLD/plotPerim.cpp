/*
Sukurta: 12:21 18 10 2021

plotPerim
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, x, y;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> x >> y;
        fo << x << " " << y << " " << x * y << " " << 2 * x + 2 * y << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
