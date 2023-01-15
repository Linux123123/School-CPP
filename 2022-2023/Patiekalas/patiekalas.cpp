#include <bits/stdc++.h>

using namespace std;

struct Patiekalas {
    double riebalu = 0;
    double baltymu = 0;
    double angliavandeniu =0;
    int svoris = 0;
};

void patiekaloRiebBalAngl(Patiekalas pat, double &rieb, double &bal, double &anglia) {
    rieb = pat.riebalu / pat.svoris * 100;
    bal = pat.baltymu / pat.svoris * 100;
    anglia = pat.angliavandeniu / pat.svoris * 100;
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int patiekalu;
    double r, b, a, svo, riebalu, baltymu, angliavandeniu;

    fr >> patiekalu;

    Patiekalas patiekalas;

    for (int i = 0; i < patiekalu; i++) {
        fr >> r >> b >> a >> svo;

        patiekalas.riebalu += r;
        patiekalas.baltymu += b;
        patiekalas.angliavandeniu += a;
        patiekalas.svoris += svo;
    }

    patiekaloRiebBalAngl(patiekalas, riebalu, baltymu, angliavandeniu);

    fo << fixed << setprecision(2) << riebalu << endl;
    fo << fixed << setprecision(2) << baltymu << endl;
    fo << fixed << setprecision(2) << angliavandeniu << endl;

    fr.close();
    fo.close();
}
