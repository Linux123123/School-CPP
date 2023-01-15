#include <bits/stdc++.h>

using namespace std;

vector<string> isdaryt (const string &s, char zenklas) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, zenklas)) {
        result.push_back (item);
    }

    return result;
}

class Taisykle {
public:
    Taisykle(string &t, string &a) {
         taisykle = t;
         adresas = a;

         taisykleIsd = isdaryt(taisykle, '.');

         for (auto taisklesDalis : taisykleIsd) {
            if (taisklesDalis.find('-') == string::npos) {
                taisykleIsdInt.push_back(stoi(taisklesDalis));
            } else {
                taisykleIsdInt.push_back(0);
            }
         }
    }

    bool ieskoti (vector<int> aIsd) {
        for (int i = 0; i < 4; i++) {
            int dalis = aIsd[i];
            string taisklesDalis = taisykleIsd[i];
            if (taisklesDalis.find('-') != string::npos) {
                auto sk = isdaryt(taisklesDalis, '-');
                int maz = stoi(sk[0]);
                int did = stoi(sk[1]);
                if (!(dalis >= maz && dalis <= did)) return false;
            } else {
                if (!(dalis == taisykleIsdInt[i])) return false;
            }
        }

        return true;
    }
public:
    string taisykle;
    vector<string> taisykleIsd;
    vector<int> taisykleIsdInt;
    string adresas;
};

int main()
{
    int n, m;
    string taisykle;
    string adresas;

    cin >> n >> m;

    vector<Taisykle> taisykles;
    vector<int> adresasInt = {0,0,0,0};

    for (int i = 0; i < n; i++) {
        cin >> taisykle >> adresas;
        Taisykle tais(taisykle, adresas);
        taisykles.push_back(tais);
    }

    for (int i = 0; i < m; i++) {
        cin >> adresas;
        auto aIsdStr = isdaryt(adresas, '.');
        for (int j = 0; j < 4; j++) adresasInt[j] = stoi(aIsdStr[j]);

        for (Taisykle tais : taisykles) {
            if (tais.ieskoti(adresasInt)) {
                cout << tais.adresas;
                if (i != m - 1) cout << endl;
                break;
            }
        }
    }
}

