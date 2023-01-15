#include <bits/stdc++.h>

using namespace std;

class Dalyvis {
public:
    void apskTaskus() {
        sort(techTasku.begin(),techTasku.end());
        sort(artiTasku.begin(), artiTasku.end());
        techTasku.erase(techTasku.begin());
        techTasku.pop_back();
        artiTasku.erase(artiTasku.begin());
        artiTasku.pop_back();
        visoTasku += accumulate(techTasku.begin(), techTasku.end(), 0);
        visoTasku += accumulate(artiTasku.begin(), artiTasku.end(), 0);
    }

public:
    string vardas;
    vector<int> techTasku;
    vector<int> artiTasku;

    int visoTasku = 0;
};

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, k, x;
    char vardas[21];
    fr >> n >> k;

    vector<Dalyvis> dalyviai;

    fr >> ws;
    for (int i = 0; i < n; i++) {
        fr.get(vardas, sizeof(vardas));

        Dalyvis dalyvis;
        dalyvis.vardas = vardas;
        fr >> ws;
        for (int j = 0; j < k; j++) {
            fr >> x;
            dalyvis.techTasku.push_back(x);
        }
        for (int j = 0; j < k; j++) {
            fr >> x;
            dalyvis.artiTasku.push_back(x);
        }

        dalyvis.apskTaskus();

        dalyviai.push_back(dalyvis);

        fr >> ws;
    }

    sort(dalyviai.begin(), dalyviai.end(), [](Dalyvis a, Dalyvis b) {
        return a.visoTasku > b.visoTasku;
    });

    for (Dalyvis d : dalyviai) {
        fo << d.vardas << " " << d.visoTasku;
        if (d.visoTasku != dalyviai[dalyviai.size() - 1].visoTasku) fo << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
