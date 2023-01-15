#include <bits/stdc++.h>

using namespace std;

class Masina
{
public:
    Masina(int metai, int vietos, float kaina, float priez)
    {
        pagaminimoMetai = metai;
        vietuSk = vietos;
        priezKaina = priez;
        pardKaina = kaina;
    }
public:
    float pardKaina;
    float priezKaina;
    int vietuSk;
    int pagaminimoMetai;
};

void rasyt(ofstream &fo, Masina masina, bool pabaiga = false) {
    fo << masina.pagaminimoMetai << " "
       << masina.vietuSk << " "
       << masina.pardKaina << " "
       << masina.priezKaina;
    if (!pabaiga) fo << endl;
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int n, metai, vietos;
    float kaina, priezKaina;

    vector<Masina> masinos;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> metai >> vietos >> kaina >> priezKaina;

        Masina masina(metai, vietos, kaina, priezKaina);
        masinos.push_back(masina);
    }

    auto mazMetai = *min_element(masinos.begin(), masinos.end(), [](const Masina &a, const Masina &b)
    {
        return a.pagaminimoMetai > b.pagaminimoMetai;
    });

    auto daugVietu = *min_element(masinos.begin(), masinos.end(), [](const Masina &a, const Masina &b)
    {
        return a.vietuSk > b.vietuSk;
    });

    auto mazKaina = *min_element(masinos.begin(), masinos.end(), [](const Masina &a, const Masina &b)
    {
        return a.pardKaina < b.pardKaina;
    });

    auto mazPriez = *min_element(masinos.begin(), masinos.end(), [](const Masina &a, const Masina &b)
    {
        return a.priezKaina < b.priezKaina;
    });

    rasyt(fo, mazMetai);
    rasyt(fo, daugVietu);
    rasyt(fo, mazKaina);
    rasyt(fo, mazPriez, true);

    fr.close();
    fo.close();

    return 0;
}

