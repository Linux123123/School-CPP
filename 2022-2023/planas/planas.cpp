#include <bits/stdc++.h>

using namespace std;

int zodziuLieka(int a, int b) {
    return a - b;
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int d, z, n, zodziuIsmokti, dienuNeispildePlano = 0, ismokoZodziu, zodziuLiko;
    vector<int> zodziuIsmoktaPerDiena;

    fr >> d >> z;

    zodziuIsmokti = d * z;

    for (int i = 0; i < d; i++)
    {
        fr >> n;
        zodziuIsmoktaPerDiena.push_back(n);
        if (n < z) {
            dienuNeispildePlano++;
        }
    }

    // Sudeti visus narius masyve
    ismokoZodziu = accumulate(zodziuIsmoktaPerDiena.begin(), zodziuIsmoktaPerDiena.end(), 0);

    // Apskaiciuojame kiek zodziu dar liko ismokti
    zodziuLiko = zodziuLieka(zodziuIsmokti, ismokoZodziu);

    fo << dienuNeispildePlano << endl;
    fo << zodziuLiko << endl;

    // Daliname is float tipo, kad butu su kableliu ir apvaliname i virsu
    fo << ceil(zodziuLiko / 10.0) << endl;

    fr.close();
    fo.close();
}
