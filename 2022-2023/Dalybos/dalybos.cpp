#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int slyvos [20], suvalgytaSlyvos[20], x, praejo = 0;

    fill(slyvos, slyvos + 10, 10);
    fill(slyvos + 10, slyvos + 20, 0);
    fill(suvalgytaSlyvos, suvalgytaSlyvos + 20, 0);

    for (int i = 0; i < 10; i++) {
        fr >> x;
        suvalgytaSlyvos[i] += x;
        slyvos[i] -= x;
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < slyvos[i]; j++) {
            suvalgytaSlyvos[i + j + 1]++;
        }
    }


    for (int i = 0; i < 20; i++){
        fo << suvalgytaSlyvos[i];
        if (i != 19) fo << " ";
    }

    fr.close();
    fo.close();
    return 0;
}
