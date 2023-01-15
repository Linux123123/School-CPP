#include <bits/stdc++.h>

using namespace std;

int kiekTepla (int num, int sk) {
    return num / sk;
}

vector<int> monetuSkaic (int pinigu, vector<int> nominalai) {
    vector<int> monetos;

    for (auto i : nominalai) {
        monetos.push_back(0);
    }

    while(pinigu != 0) {
        for (int i = 0; i < nominalai.size(); i++) {
            auto nom = nominalai[i];
            if (nom <= pinigu) {
                int nomTepla = kiekTepla(pinigu, nom);
                int monetuSuma = nomTepla * nom;
                pinigu -= monetuSuma;
                monetos[i] += nomTepla;
            }
        }
    }

    return monetos;
}

void rasyti (ofstream &fo, vector<int> nominalai, vector<int> monetos) {
    for (int i = 0; i < monetos.size(); i++) {
        fo << nominalai[i] << " " << monetos[i] << endl;
    }
    fo << accumulate(monetos.begin(), monetos.end(), 0) << endl;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    vector<int> gilijosNominalai, gilijosStudPin,
                eglijosNominalai, eglijosStudPin,
                eglijosMonetos, gilijosMonetos;

    int n, x, gStudP, eStudP;
    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> x;
        gilijosNominalai.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        fr >> x;
        gilijosStudPin.push_back(x * gilijosNominalai[i]);
    }

    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> x;
        eglijosNominalai.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        fr >> x;
        eglijosStudPin.push_back(x * eglijosNominalai[i]);
    }

    gStudP = accumulate(gilijosStudPin.begin(), gilijosStudPin.end(), 0);
    eStudP = accumulate(eglijosStudPin.begin(), eglijosStudPin.end(), 0);

    gilijosMonetos = monetuSkaic(gStudP, eglijosNominalai);
    eglijosMonetos = monetuSkaic(eStudP, gilijosNominalai);

    rasyti(fo, eglijosNominalai, gilijosMonetos);
    rasyti(fo, gilijosNominalai, eglijosMonetos);

    fr.close();
    fo.close();
    return 0;
}
