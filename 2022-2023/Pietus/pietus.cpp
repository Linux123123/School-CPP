#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, p, k, patKaina, visoKaina = 0;

    fr >> n >> p;
    char pat[15];

    vector<int> kainos;
    vector<int> patKainos;

    for (int i = 0; i < n; i++) {
        fr >> k;
        kainos.push_back(k);
    }

    fr >> ws;
    for (int i = 0; i < p; i++) {
        fr.get(pat, sizeof(pat));
        fr >> ws;

        patKaina = 0;
        for (int j = 0; j < n; j++) {
            fr >> k;
            patKaina += k * kainos[j];
        }
        visoKaina += patKaina;
        fr.ignore();

        fo << pat << "  " << patKaina << endl;
    }

    fo << visoKaina / 100 << " " << visoKaina - (visoKaina / 100 * 100);

    fr.close();
    fo.close();
    return 0;
}
