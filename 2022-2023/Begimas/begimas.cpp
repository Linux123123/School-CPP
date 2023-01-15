#include <bits/stdc++.h>

using namespace std;

class Diena {
public:
    Diena(int nr, int rLaikas, int vLaikas) {
        diena = nr;
        visoLaikas = rLaikas + vLaikas;
    }
public:
    int diena;
    int visoLaikas;
};

int vMiM (int v, int m) {
    return v * 60 + m;
}

bool arNebego (int v, int m, int v1, int m1) {
    return v == 0 && m == 0 && v1 == 0 && m1 == 0;
}

int laikas (int v, int m, int v1, int m1) {
    int pradMin = vMiM(v, m);
    if (v1 == 0) v1 = 12;
    int galMin = vMiM(v1, m1);

    return (galMin - pradMin);
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, nr, v, m, v1, m1, v2, m2, v3, m3;
    fr >> n;

    vector<Diena> begimai;

    for (int i = 0; i < n; i++) {
        fr >> nr >> v >> m >> v1 >> m1 >> v2 >> m2 >> v3 >> m3;

        if (arNebego(v, m, v1, m1) || arNebego(v2, m2, v3, m3)) continue;

        int rytLaikas = laikas(v, m, v1, m1);
        int vakaroLaikas = laikas(v2, m2, v3, m3);

        Diena begimas(nr, rytLaikas, vakaroLaikas);

        begimai.push_back(begimas);
    }

    Diena mazDiena = *min_element(begimai.begin(), begimai.end(), [](Diena a, Diena b) {
                    return a.visoLaikas < b.visoLaikas;
                 });

    int mazLaikas = mazDiena.visoLaikas;

    vector<int> dienos;
    string dienos = "";

    for (Diena i : begimai) {
        dienos += i.diena;
    }

    fo << "Minimalus laikas" << endl;
    fo << mazLaikas << endl;
    fo << "Dienos" << endl;
    fo <<

    fr.close();
    fo.close();
    return 0;
}
