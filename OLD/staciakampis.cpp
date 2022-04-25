/*
Sukurta: 09:55 12 04 2022

staciakampis
*/

#include <bits/stdc++.h>
using namespace std;

int perimetras(int a, int b) { return 2 * (a + b); }

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, a, b;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> a >> b;
        fo << a << " " << b << " " << a * b << " " << perimetras(a, b) << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
