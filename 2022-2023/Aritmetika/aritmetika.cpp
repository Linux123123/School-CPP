#include <bits/stdc++.h>

using namespace std;

class Veiksmas
{

public:
    int pirmas;
    double antras; // Del dalybos / daugybos double
    int atsakymas;
    vector<char> zenklai;

public:
    Veiksmas (int a, int b, int ats)
    {
        pirmas = a;
        antras = b;
        atsakymas = ats;
    };

    tikrinti ()
    {
        if (pirmas + antras == atsakymas)
        {
            zenklai.push_back('+');
        };
        if (pirmas - antras == atsakymas)
        {
            zenklai.push_back('-');
        };
        double daugyba = pirmas * antras;
        if (daugyba == atsakymas)
        {
            zenklai.push_back('*');
        };
        double dalyba = pirmas / antras;
        if (dalyba == atsakymas)
        {
            zenklai.push_back('/');
        };
    };
};



int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int n, a, b, c;

    fr >> n;

    vector<Veiksmas> veiksmai;

    for (int i = 0; i < n; i++)
    {
        fr >> a >> b >> c;

        Veiksmas veiksmas(a, b, c);
        veiksmas.tikrinti();
        veiksmai.push_back(veiksmas);
    }

    for (auto v : veiksmai)
    {
        if (v.zenklai.size() == 0)
        {
            fo << v.pirmas << " " << v.antras << " " << v.atsakymas << " KLAIDINGA\n";
            continue;
        };
        for (auto zenklas : v.zenklai)
        {
            fo << v.pirmas << " " << zenklas << " " << v.antras << " = " << v.atsakymas << endl;
        }
    }

    fr.close();
    fo.close();
}
