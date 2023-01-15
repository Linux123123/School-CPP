#include <bits/stdc++.h>

using namespace std;

class Apskritis {
public:
    unordered_map<string, int> miestai;
    string pavadinimas;
    int maz;
    int vis;
public:
    void apskaiciuoti() {
        auto x = *min_element(miestai.begin(), miestai.end(), [](auto a, auto b){
            return a.second < b.second;
        });
        maz = x.second;

        vis = accumulate(miestai.begin(), miestai.end(), 0, [](const int& a, const auto& b) {
            return a + b.second;
        });
    }
};

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, zmoniu;
    char apkPav[14];
    char miePav[21];
    map<string, Apskritis> apskritys;
    vector<Apskritis> apsk;
    fr >> n;

    fr >> ws;
    for (int i = 0; i < n; i++) {
        fr.get(miePav, sizeof(miePav));
        fr.get(apkPav, sizeof(apkPav));
        fr >> zmoniu;
        fr >> ws;

        if (apskritys.find((string)apkPav) == apskritys.end()){
            Apskritis apskritis;
            apskritis.miestai[(string)miePav] = zmoniu;
            apskritis.pavadinimas = (string)apkPav;
            apskritys[(string)apkPav] = apskritis;
        } else {
            apskritys[(string)apkPav].miestai[(string)miePav] = zmoniu;
        }
    }

    fo << apskritys.size() << endl;

    for( auto it = apskritys.begin(); it != apskritys.end(); ++it ) {
        it->second.apskaiciuoti();
        apsk.push_back( it->second );
    }

    sort(apsk.begin(), apsk.end(), [](Apskritis a, Apskritis b) {
        bool lygu = a.maz == b.maz;
        if (lygu) {
            return a.pavadinimas < b.pavadinimas;
        } else {
            return a.maz < b.maz;
        }
    });

    for (auto x : apsk) {
        fo << x.pavadinimas << x.maz << " " << x.vis;
        if (x.pavadinimas != apsk[apsk.size()-1].pavadinimas) fo << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
