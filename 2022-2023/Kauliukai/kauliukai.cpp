#include <bits/stdc++.h>

using namespace std;

class Valdovas {
public:
    string vardas;
    vector<int> lyginiai;
    vector<int> nelyginiai;

    int skaicius;
public:
    void skaiciuoti() {
        int lyg = accumulate(lyginiai.begin(), lyginiai.end(), 0);
        int nelyg = accumulate(nelyginiai.begin(), nelyginiai.end(), 0) * -1;

        skaicius = lyg + nelyg;
    }
};

void rasyti(ofstream &fo, Valdovas valdovas) {
    fo << valdovas.vardas << "  " << valdovas.skaicius;

    fo.close();
}

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, k, x;
    char vardas[10];
    vector<Valdovas> valdovai;
    vector<Valdovas> valdovaiKop;
    vector<Valdovas> valdovaiGer;
    vector<Valdovas> valdovaiLyg;
    fr >> n >> k;

    fr >> ws;
    for (int i = 0; i < n; i++) {
        fr.get(vardas, sizeof(vardas));

        Valdovas valdovas;
        valdovas.vardas = vardas;

        fr >> ws;

        for (int j = 0; j < k; j++) {
            fr >> x;
            if (x % 2 == 0) {
                valdovas.lyginiai.push_back(x);
            } else {
                valdovas.nelyginiai.push_back(x);
            }
        }

        valdovas.skaiciuoti();
        valdovai.push_back(valdovas);
        fr >> ws;
    }

    fr.close();

    valdovaiKop.assign(valdovai.begin(), valdovai.end());
    sort(valdovaiKop.begin(), valdovaiKop.end(), [](Valdovas a, Valdovas b) {
        return a.skaicius > b.skaicius;
    });

    int daug = valdovaiKop[0].skaicius;

    for (Valdovas v : valdovai) {
        if (v.skaicius == daug) valdovaiGer.push_back(v);
    }

    if (valdovaiGer.size() != 1) {
        sort(valdovaiGer.begin(), valdovaiGer.end(), [](Valdovas a, Valdovas b) {
            return a.lyginiai.size() > b.lyginiai.size();
        });
        int daugLyg = valdovaiGer[0].lyginiai.size();
        for (Valdovas v : valdovaiGer) {
            if (v.lyginiai.size() == daugLyg) valdovaiLyg.push_back(v);
        }

        if (valdovaiLyg.size() != 1) {
            Valdovas vald = *find_if(valdovai.begin(), valdovai.end(), [daugLyg, daug](Valdovas a) {
                return a.lyginiai.size() == daugLyg && a.skaicius == daug;
            });
            rasyti(fo, vald);
            return 0;
        }

        rasyti(fo, valdovaiGer[0]);
        return 0;
    }

    rasyti(fo, valdovaiGer[0]);
    return 0;
}
