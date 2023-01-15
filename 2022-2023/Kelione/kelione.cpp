#include <bits/stdc++.h>

using namespace std;

double kelioneMasinaKaina(double &degaluKiekis, double &atstumas, double &litroKaina) {
    return (atstumas * (degaluKiekis / 100)) * litroKaina;
}

double kelioneKainaAutobusu(double &autobusoKaina, int &seimosNariu) {
    return autobusoKaina * seimosNariu;
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    double degaluKiekis, atstumas, litroKaina, marsrutoKaina;
    int seimosNariu, marsrutu;

    fr >> degaluKiekis >> atstumas >> litroKaina;

    fr >> seimosNariu >> marsrutu;

    vector<double> marsrutai;

    for (int i = 0; i < marsrutu; i++)
    {
        fr >> marsrutoKaina;
        marsrutai.push_back(marsrutoKaina);
    }

    double masinaKelionesKaina = kelioneMasinaKaina(degaluKiekis, atstumas, litroKaina);

    for (auto mKaina : marsrutai) {
        fo << setw(4) << fixed << setprecision(2)
           << masinaKelionesKaina - kelioneKainaAutobusu(mKaina, seimosNariu)
           << endl;
    }

    fr.close();
    fo.close();
}
