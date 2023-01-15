#include <bits/stdc++.h>

using namespace std;

struct Laikas {
    int valandos;
    int minutes;
};

class Marsrutas
{
public:
    Marsrutas(int laikasV, int laikasM)
    {
        pradLaikasV = laikasV;
        pradLaikasM = laikasV * 60 + laikasM;
    }

    void sustojimas(int laikasV, int laikasM, int laikasIsvV, int laikasIsvM) {
        susLaikasM = (laikasIsvV * 60 + laikasIsvM) - (laikasV * 60 + laikasM);
    }

    void galutinisLaikas (int laikasV, int laikasM) {
        if (laikasV < pradLaikasV) laikasV += 24;
        galLaikasM = laikasV * 60 + laikasM;
    }

    Laikas apskaiciuoti() {
        int vaziavimoLaikas = galLaikasM - pradLaikasM - susLaikasM;
        Laikas laikas;

        laikas.minutes = vaziavimoLaikas % 60;
        laikas.valandos = vaziavimoLaikas / 60;

        return laikas;
    }

public:
    int pradLaikasM;
    int susLaikasM = 0;
    int galLaikasM;

private:
    int pradLaikasV;
};

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int n, v, m, vIsv, mIsv;

    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> v >> m;
        Marsrutas mars(v, m);
        fr >> v >> m;
        fr >> vIsv >> mIsv;

        if (vIsv == 0) {
            mars.galutinisLaikas(v, m);
            fr >> v >> v;
        } else {
            mars.sustojimas(v, m, vIsv, mIsv);
            fr >> v >> m;
            mars.galutinisLaikas(v, m);
        }

        Laikas laikas = mars.apskaiciuoti();

        fo << setw(2) << fixed << laikas.valandos << " "
           << setw(2) << fixed << laikas.minutes << endl;
    }

    fr.close();
    fo.close();
}
