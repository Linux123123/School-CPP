#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int n, zmoniu, kalbaMln;
    float procentu;

    fr >> n >> zmoniu;

    for (int i = 0; i < n; i++) {
        fr >> kalbaMln;
        procentu = kalbaMln * 100.0 / zmoniu;

        fo << setprecision(2) << fixed << procentu << " " << zmoniu - kalbaMln << endl;
    }

    fr.close();
    fo.close();
}
