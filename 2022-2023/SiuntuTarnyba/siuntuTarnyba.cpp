#include <bits/stdc++.h>

using namespace std;

struct Siunta{
   string pav;
   int x;
   int y;

};

int rastiAtstuma(int x, int y) {
    return (abs(x) + abs(y)) * 2;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, m, imoniu = 0, kilometru = 0, atstumas;
    char impav[11];
    string pav;
    vector<Siunta> siuntos;
    fr >> n >> m;

    fr.ignore();
    for (int i = 0; i < n; i++) {
        Siunta siunta;
        fr.get(impav, sizeof(impav));
        siunta.pav = impav;
        fr >> ws;
        fr >> siunta.x >> siunta.y;
        fr.ignore();

        siuntos.push_back(siunta);
    }

    for (Siunta siunta : siuntos) {
        atstumas = rastiAtstuma(siunta.x, siunta.y);
        if (kilometru + atstumas > m) break;
        pav = siunta.pav;
        imoniu++;
        kilometru += atstumas;
    }

    fo << imoniu << " " << kilometru << " " << pav;

    fr.close();
    fo.close();
    return 0;
}
