#include <bits/stdc++.h>

using namespace std;

bool ar2daugiauLengvesne(int kupr, int sunkiausia) {
    return sunkiausia / 2 >= kupr;
}

int main()
{
    ifstream fr("U1.txt");
    ifstream fr2("U1.txt");
    ofstream fo("U1rez.txt");

    int n, x, didz = 0, kupriniu = 0;

    fr >> n;
    fr2.ignore();

    for (int i = 0; i < n; i++) {
        fr >> x;
        if (didz < x) didz = x;
    }

    for (int i = 0; i < n; i++) {
        fr2 >> x;
        if (ar2daugiauLengvesne(x, didz)) {
            kupriniu++;
        }
    }

    fo << didz << " " << kupriniu;

    fr.close();
    fo.close();
    return 0;
}
