#include <bits/stdc++.h>
using namespace std;

class Grybautojas {
public:
    string vardas;
    int bara = 0;
    int raud = 0;
    int leps = 0;
    int viso;
public:
    void apskaiciuoti() {
        viso = bara + raud + leps;
    }
};

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, d, b, r, l;
    char v[15];
    vector<Grybautojas> grybautojai;

    fr >> n;

    fr.ignore();
    for (int i = 0; i < n; i++) {
        fr.get(v, sizeof(v));
        fr >> ws;

        Grybautojas grybautojas;
        grybautojas.vardas = v;

        fr >> d;

        for (int j = 0; j < d; j++) {
            fr >> b >> r >> l;
            grybautojas.bara += b;
            grybautojas.raud += r;
            grybautojas.leps += l;
        }

        grybautojas.apskaiciuoti();
        grybautojai.push_back(grybautojas);

        fr >> ws;
    }

    for (Grybautojas g : grybautojai) {
        fo << g.vardas << " " << fixed << setw(5) << g.bara
             << fixed << setw(5) << g.raud
             << fixed << setw(5) << g.leps
             << endl;
    }

    sort(grybautojai.begin(), grybautojai.end(), [](Grybautojas a, Grybautojas b) {
         return a.viso > b.viso;
    });

    fo << grybautojai[0].vardas << " " << grybautojai[0].viso;

    fo.close();
    fr.close();
    return 0;
}
