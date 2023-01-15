#include <bits/stdc++.h>

using namespace std;

float suskVarza(vector<int> varzos) {
    float varza = 0;

    for (auto v : varzos) {
        varza += 1.0 / v;
    }

    return 1.0 / varza;
}

int main()
{
    ifstream fr("Duom1.txt");
    ofstream fo("Rez1.txt");

    int n, m, x;

    fr >> n;

    vector<vector<int>> varzos;

    for (int i = 0; i < n; i++) {
        fr >> m;
        vector<int> v;
        for (int j = 0; j < m; j++) {
            fr >> x;
            v.push_back(x);
        }
        varzos.push_back(v);
    }

    float varza = 0;

    for (auto v : varzos) {
        varza += suskVarza(v);
    }

    fo << setprecision(2) << fixed << varza;

    fr.close();
    fo.close();
    return 0;
}
