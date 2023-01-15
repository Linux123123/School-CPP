#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int kiekiai [4][5];
    int x, suma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            fr >> x;
            kiekiai[j][i] = x;
        }
    }

    for (int i = 0; i < 4; i++) {
        suma = 0;
        for (int j = 0; j < 5; j++) {
            suma += kiekiai[i][j];
        }
        fo << suma;
        if (i != 3) fo << endl;
    }

    fr.close();
    fo.close();

    return 0;
}

