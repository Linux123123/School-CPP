/*
Sukurta: 12:28 18 10 2021

didMaz
*/

#include <bits/stdc++.h>
using namespace std;

void didMaz(int a, int b, int c, int &mn, int &mx)
{
    mn = min({a, b, c});
    mx = max({a, b, c});
}

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n, a, b, c, mn, mx;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> a >> b >> c;
        didMaz(a, b, c, mn, mx);
        fo << mn << " " << mx << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
