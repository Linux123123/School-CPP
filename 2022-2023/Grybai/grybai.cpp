#include <bits/stdc++.h>

using namespace std;

class GrybDiena
{
public:
    bool grybauta = false;
    int baravyku = 0;
    int raudonikiu = 0;
    int lepsiu = 0;
    int nr;
public:
    int isvisoGryb () {
        return baravyku + raudonikiu + lepsiu;
    }
};

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, d, b, r, l;
    fr >> n;

    GrybDiena dienos [32];
    vector<GrybDiena> geriausiosDienos;

    for (int i = 0; i < n; i++)
    {
        fr >> d >> b >> r >> l;
        d--;
        if (b > 0 || r > 0 || l > 0) {
            dienos[d].grybauta = true;
            dienos[d].baravyku += b;
            dienos[d].raudonikiu += r;
            dienos[d].lepsiu += l;
            dienos[d].nr = d + 1;
        }
    }

    for (int i = 0; i < 32; i++)
    {
        GrybDiena diena = dienos[i];

        if (!diena.grybauta) continue;

        fo << diena.nr << " " << diena.baravyku << " " << diena.raudonikiu << " " << diena.lepsiu << endl;
    }

    sort(dienos, dienos + sizeof(dienos)/sizeof(dienos[0]), [](GrybDiena a, GrybDiena b) {
        return a.isvisoGryb() > b.isvisoGryb();
    });

    int didz = dienos[0].isvisoGryb();

    for (int i = 0; i < 32; i++) {
        GrybDiena diena = dienos[i];
        if (diena.isvisoGryb() == didz) geriausiosDienos.push_back(diena);
    }

    sort(geriausiosDienos.begin(), geriausiosDienos.end(), [](GrybDiena a, GrybDiena b){
         return a.nr < b.nr;
    });

    fo << geriausiosDienos[0].nr << " " << geriausiosDienos[0].isvisoGryb();

    fr.close();
    fo.close();
    return 0;
};
