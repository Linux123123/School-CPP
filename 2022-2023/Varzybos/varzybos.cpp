#include <bits/stdc++.h>

using namespace std;

class Begikas {
public:
    int laikas;
    string vardas;
};

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, m, mLaikas, sLaikas;
    char vardas[20];

    fr >> n;

    vector<vector<Begikas>> begikuGrupes;
    vector<Begikas> geriausi;

    for (int i = 0; i < n; i++) {
        fr >> m;
        fr.ignore();

        vector<Begikas> begikai;
        for (int j = 0; j < m; j++) {
            Begikas begikas;
            fr.get(vardas, sizeof(vardas));

            fr >> ws;
            fr >> mLaikas >> sLaikas;
            fr >> ws;
            sLaikas += mLaikas * 60;
            begikas.vardas = vardas;
            begikas.laikas = sLaikas;

            begikai.push_back(begikas);
        }

        begikuGrupes.push_back(begikai);
    }

    for (vector<Begikas> &begik : begikuGrupes) {
        sort(begik.begin(), begik.end(), [](Begikas a, Begikas b) {
            return a.laikas < b.laikas;
        });
        int geriausiuPereina = begik.size() / 2;

        for (int i = 0; i < geriausiuPereina; i++) {
            geriausi.push_back(begik[i]);
        }
    }

    sort(geriausi.begin(), geriausi.end(), [](Begikas a, Begikas b) {
            return a.laikas < b.laikas;
    });

    for (Begikas begikas : geriausi) {
        fo  << begikas.vardas << " " << begikas.laikas / 60 << " " << begikas.laikas - (begikas.laikas / 60 * 60) << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
