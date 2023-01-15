#include <bits/stdc++.h>

using namespace std;

struct Panaudota {
    int vL = 0;
    int tL = 0;
    int pL = 0;
    int likoAl;
};

// Skaiciuoja kiek reikia statiniu
Panaudota aliejausSkaic (int vL, int tL, int pL, int aL) {
    Panaudota panaudota;
    while (true) {
        if (5 <= aL && pL != 0) {
            aL -= 5;
            pL--;
            panaudota.pL++;
        } else if (3 <= aL && tL != 0) {
            aL -= 3;
            tL--;
            panaudota.tL++;
        } else if (1 <= aL && vL != 0) {
            aL -= 1;
            vL--;
            panaudota.vL++;
        } else {
            break;
        }
    }

    panaudota.likoAl = aL;

    return panaudota;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int vienoL, trijuL, penkiuL,
        aliejaus, islaidos,
        vienoLKaina, trijuLKaina, penkiuLKaina,
        vVLKaina, tVLKaina, pVLKaina, visoKaina;

    fr >> vienoL >> trijuL >> penkiuL
       >> aliejaus >> islaidos
       >> vienoLKaina >> trijuLKaina >> penkiuLKaina;

    // Kiek panaudota
    Panaudota panaudota = aliejausSkaic(vienoL, trijuL, penkiuL, aliejaus);

    fo << panaudota.vL << " " << panaudota.tL << " " << panaudota.pL << " " << panaudota.likoAl << endl;

    fo << vienoL - panaudota.vL << " " << trijuL - panaudota.tL << " " << penkiuL - panaudota.pL << endl;

    // Kiek truksta
    Panaudota truksta = aliejausSkaic(1000, 1000, 1000, panaudota.likoAl);

    fo << truksta.vL << " " << truksta.tL << " " << truksta.pL << endl;

    vVLKaina = (panaudota.vL + truksta.vL) * vienoLKaina;
    tVLKaina = (panaudota.tL + truksta.tL) * trijuLKaina;
    pVLKaina = (panaudota.pL + truksta.pL) * penkiuLKaina;

    visoKaina = vVLKaina + tVLKaina + pVLKaina - islaidos;

    fo << visoKaina;

    fr.close();
    fo.close();
    return 0;
}
