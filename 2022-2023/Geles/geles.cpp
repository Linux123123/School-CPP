#include <bits/stdc++.h>

using namespace std;

struct Intervalas {
    int m;
    int d;
};

class Gele
{
public:
    Gele(int numeris, int pMe, int pDi, int paM, int paD)
    {
        nr = numeris;
        prad.m = pMe;
        prad.d = pDi;

        gal.m = paM;
        gal.d = paD;
    }
public:
    int nr;
    Intervalas prad;
    Intervalas gal;
};

int rastiDienaIsInter(Intervalas a) {
    if (a.m == 6) {
        return a.d;
    }

    if (a.m == 7) {
        return 31 + a.d;
    }

    if (a.m == 8) {
        return 31 + 30 + a.d;
    }
}

Intervalas rastiInervtIsDienos(int a) {
    Intervalas interv;
    if (a <= 31) {
        interv.m = 6;
        interv.d = a;
    } else if (a > 31 && a <= 61) {
        interv.m = 7;
        interv.d = a - 31;
    } else {
        interv.m = 8;
        interv.d = a - 31 - 30;
    }

    return interv;
}

int main()
{
    const int dienu = 92;
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, nr, pMen, pD, pabMen, pabD;

    vector<int> dienos(dienu);

    fill(dienos.begin(), dienos.end(), 0);

    fr >> n;
    vector<Gele> geles;

    for (int i; i < n; i++)
    {
        fr >> nr >> pMen >> pD >> pabMen >> pabD;

        Gele gele(nr, pMen, pD, pabMen, pabD);
        geles.push_back(gele);
    }

    for (Gele gele : geles) {
        int pradDiena = rastiDienaIsInter(gele.prad);
        int galDiena = rastiDienaIsInter(gele.gal);

        if (pradDiena == galDiena) {
            dienos[pradDiena - 1]++;
        } else {
            for (int i = pradDiena; i < galDiena; i++) {
                dienos[i - 1]++;
            }
        }
    }

    int daugiausiai = *max_element(dienos.begin(), dienos.end());

    fo << daugiausiai << endl;

    auto pradzIt = find(dienos.begin(), dienos.end(), daugiausiai);
    int pradz = pradzIt - dienos.begin();

    int galas;
    for (int i = pradz; i < dienos.size(); i++) {
        if (dienos[i] != daugiausiai) {
            galas = i;
            break;
        }
    }

    if (pradz + 1 != galas) galas ++;

    Intervalas pradzia = rastiInervtIsDienos(pradz + 1);
    Intervalas pabaiga = rastiInervtIsDienos(galas);

    fo << pradzia.m << " " << pradzia.d << endl;
    fo << pabaiga.m << " " << pabaiga.d;

    fo.close();
    fr.close();
    return 0;
}
