#include <bits/stdc++.h>

using namespace std;

void ProdRasyt (ofstream &fo, float a, bool pabaiga = false) {
    fo << setprecision(2) << fixed << a;
    if (pabaiga) {
        fo << endl;
    } else {
        fo << " ";
    }
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int kRieb, kAngl, kBal, n, svoris;
    float rieb, bal, angl, visasK = 0;

    fr >> kRieb >> kAngl >> kBal
       >> n;

    for (int i = 0; i < n; i++) {
        fr >> rieb >> bal >> angl >> svoris;
        ProdRasyt(fo, svoris * rieb / 100 * kRieb);
        ProdRasyt(fo, svoris * bal / 100 * kAngl);
        ProdRasyt(fo, svoris * angl / 100 * kBal, true);

        visasK += svoris * rieb / 100 * kRieb;
        visasK += svoris * bal / 100 * kAngl;
        visasK += svoris * angl / 100 * kBal;
    }

    ProdRasyt(fo, visasK, true);

    fr.close();
    fo.close();
}

