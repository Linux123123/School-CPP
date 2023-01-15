#include <bits/stdc++.h>

using namespace std;

string sesioDalis (int x) {
    if (x < 10) {
        return to_string(x);
    };
    char a = (char)((int)'A' + x - 10);
    string s(1, a);
    return s;
}

string desimtISesio (int x) {
    int sveikoji = x / 16;
    int liekana = x % 16;

    return sesioDalis(sveikoji) + sesioDalis(liekana);
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int x, y, r, g, b;

    fr >> x >> y;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            fr >> r >> g >> b;
            fo << desimtISesio(r) << desimtISesio(g) << desimtISesio(b);
            if (j != y - 1) fo << ";";
        }
        if (i != x - 1) fo << endl;
    }

    fo.close();
    fr.close();
    return 0;
}
