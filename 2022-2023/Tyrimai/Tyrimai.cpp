#include <bits/stdc++.h>

using namespace std;

class Marsrutas {
public:
    int nr = 0;
    int ilipo = 0;
    int islipo = 0;
};

void skaityti(ifstream &fr, Marsrutas marsrutai[]) {
    int n, m, x;
    fr >> n;
    for (int i = 0; i < n; i++) {
        fr >> m >> x;
        marsrutai[m - 1].nr = m;
        if (x < 0) {
            marsrutai[m - 1].islipo += x;
        } else {
            marsrutai[m - 1].ilipo += x;
        }
    }
}

int daugKeleiviu(Marsrutas marsrutai[]) {
    vector<Marsrutas> daugKeleiv;

    sort(marsrutai, marsrutai + 100, [](Marsrutas a, Marsrutas b) {
         return a.ilipo > b.ilipo;
    });

    int didzIlipo = marsrutai[0].ilipo;

    for (int i = 0; i < 100; i++) {
        Marsrutas marsrutas = marsrutai[i];
        if (marsrutas.ilipo == didzIlipo) daugKeleiv.push_back(marsrutas);
    }

    sort(daugKeleiv.begin(), daugKeleiv.end(), [](Marsrutas a, Marsrutas b) {
        return a.nr < b.nr;
    });

    return daugKeleiv[0].nr;
}

void rasyti(ofstream &fo, int x) {
    fo << setw(6) << fixed << x;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    Marsrutas marsrutai [100];

    skaityti(fr, marsrutai);

    for (int i = 0; i < 100; i++) {
        Marsrutas marsrutas = marsrutai[i];

        if (!marsrutas.nr) continue;

        rasyti(fo, marsrutas.nr);
    }

    fo << endl;

    for (int i = 0; i < 100; i++) {
        Marsrutas marsrutas = marsrutai[i];

        if (!marsrutas.nr) continue;

        rasyti(fo, marsrutas.ilipo);
    }

    fo << endl;

    for (int i = 0; i < 100; i++) {
        Marsrutas marsrutas = marsrutai[i];

        if (!marsrutas.nr) continue;

        rasyti(fo, marsrutas.islipo);
    }

    fo << endl;

    rasyti(fo, daugKeleiviu(marsrutai));

    fr.close();
    fo.close();
    return 0;
}
