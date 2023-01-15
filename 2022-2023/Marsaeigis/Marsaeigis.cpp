#include <bits/stdc++.h>

using namespace std;

struct Koord {
    int x = 0;
    int y = 0;
    bool buvoTiksle = false;
};

Koord judetiKomanda(vector<int> &komanda, Koord prad, Koord tiks) {
    if (prad.x == tiks.x && prad.y == tiks.y) {
        komanda.resize(0);
        prad.buvoTiksle = true;
        return prad;
    }
    Koord koord;
    koord.x = prad.x;
    koord.y = prad.y;
    for (int i = 0; i < komanda.size(); i++) {
        int k = komanda[i];
        switch(k) {
        case 1:
            koord.y++;
            break;
        case 2:
            koord.x++;
            break;
        case 3:
            koord.y--;
            break;
        case 4:
            koord.x--;
            break;
        }
        if (koord.x == tiks.x && koord.y == tiks.y) {
            koord.buvoTiksle = true;
            komanda.resize(i + 1);
            return koord;
        }
    }

    return koord;
}

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    vector<vector<int>> komandos;

    Koord prad;
    Koord tiks;
    int n, k, x;

    fr >> prad.x >> prad.y;
    fr >> tiks.x >> tiks.y;
    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> k;

        vector<int> komanda;

        for (int j = 0; j < k; j++) {
            fr >> x;
            komanda.push_back(x);
        }

        komandos.push_back(komanda);
    }

    for (int i = 0; i < komandos.size(); i++) {
        auto kom = komandos[i];
        Koord vieta = judetiKomanda(kom, prad, tiks);
        string ats = vieta.buvoTiksle ? "pasiektas tikslas" : "sekos pabaiga";
        fo << setw(20) << fixed << left << ats;
        for (int k : kom) {
            fo << k << " ";
        }
        fo << kom.size();
        if (i != komandos.size() - 1) fo << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
