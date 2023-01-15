#include <bits/stdc++.h>

using namespace std;

class Zaidejas {
public:
    Zaidejas(int numeris) {
        nr = numeris;
    }
    void pridetiLaikai(int sk) {
        laikai.push_back(sk);
    }
    void skaiciuti () {
        for (auto i : laikai) {
            if (i < 0) isVisoSedejo += i * (-1);
            if (i > 0) isVisoZaide += i;
        }

        if (laikai[0] > 0) pradejoZaist = true;
    }

public:
    int nr;
    bool pradejoZaist = false;
    int isVisoZaide = 0;
    int isVisoSedejo = 0;
    vector<int> laikai;
};

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, t, x, k;
    fr >> n;

    vector<Zaidejas> zaidejai;
    vector<Zaidejas> pradejaZaidejai;
    vector<Zaidejas> ilgZaideZaidejai;
    vector<Zaidejas> ilgIlsejZaidejai;

    for (int i = 0; i < n; i++) {
        fr >> k >> t;
        Zaidejas zaidejas(k);

        for (int j = 0; j < t; j++) {
            fr >> x;
            zaidejas.pridetiLaikai(x);
        }

        zaidejas.skaiciuti();

        zaidejai.push_back(zaidejas);
        if (zaidejas.pradejoZaist) pradejaZaidejai.push_back(zaidejas);
    }

    sort(pradejaZaidejai.begin(), pradejaZaidejai.end(), [](Zaidejas a, Zaidejas b){
            return a.nr < b.nr;
         });

    for (Zaidejas i : pradejaZaidejai) {
        fo << i.nr;
        if (i.nr == pradejaZaidejai[pradejaZaidejai.size() - 1].nr) {
            fo << endl;
        } else {
            fo << " ";
        }
    }

    // Ilgiausiai zaides

    Zaidejas ilgZaide = *max_element(zaidejai.begin(), zaidejai.end(), [](Zaidejas a, Zaidejas b){
            return a.isVisoZaide < b.isVisoZaide;
         });

    for (Zaidejas i : zaidejai) {
        if (i.isVisoZaide == ilgZaide.isVisoZaide) ilgZaideZaidejai.push_back(i);
    }

    sort(ilgZaideZaidejai.begin(), ilgZaideZaidejai.end(), [](Zaidejas a, Zaidejas b){
            return a.nr < b.nr;
         });

    fo << ilgZaideZaidejai[0].nr << " " << ilgZaideZaidejai[0].isVisoZaide << endl;

    // Sedejo

    Zaidejas ilgSedej = *max_element(zaidejai.begin(), zaidejai.end(), [](Zaidejas a, Zaidejas b){
            return a.isVisoSedejo < b.isVisoSedejo;
         });

    for (Zaidejas i : zaidejai) {
        if (i.isVisoSedejo == ilgSedej.isVisoSedejo) ilgIlsejZaidejai.push_back(i);
    }

    sort(ilgIlsejZaidejai.begin(), ilgIlsejZaidejai.end(), [](Zaidejas a, Zaidejas b){
            return a.nr < b.nr;
         });

    fo << ilgIlsejZaidejai[0].nr << " " << ilgIlsejZaidejai[0].isVisoSedejo;

    fr.close();
    fo.close();
    return 0;
}
