#include <bits/stdc++.h>
using namespace std;

struct Pirstine {
    int dydis;
    bool puse;
    bool lytis;
    bool panaudota = false;
};

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    vector<Pirstine> pirtines;
    int vyrPoru = 0;
    int motPoru = 0;
    int motPirst = 0;
    int vyrPirst = 0;

    int n, lyt, puse, dyd;
    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> lyt >> puse >> dyd;

        Pirstine pirstine;
        pirstine.dydis = dyd;
        pirstine.puse = puse == 1 ? false : true;
        pirstine.lytis = lyt == 4 ? false : true;

        if (lyt == 4) motPirst++;
        if (lyt == 3) vyrPirst++;

        pirtines.push_back(pirstine);
    }

    for (int i = 0; i < pirtines.size(); i++) {
        Pirstine p = pirtines[i];
        if (p.panaudota) continue;
        for (int j = 0; j < pirtines.size(); j++) {
            Pirstine p1 = pirtines[j];
            if (p1.panaudota) continue;
            if (p.dydis == p1.dydis && p.lytis == p1.lytis && p.puse == !p1.puse) {
                pirtines[i].panaudota = true;
                pirtines[j].panaudota = true;

                if (p.lytis) {
                    vyrPoru++;
                    vyrPirst -= 2;
                } else {
                    motPoru++;
                    motPirst -= 2;
                }
                break;
            }
        }
    }

    fo << motPoru << endl << vyrPoru << endl << motPirst << endl << vyrPirst;

    fr.close();
    fo.close();
    return 0;
}
