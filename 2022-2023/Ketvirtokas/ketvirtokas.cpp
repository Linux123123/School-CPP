#include <bits/stdc++.h>

using namespace std;

// Float nes reikia dalinti
int kiekTelpa(int sk, float nr) {
    return floor(sk / nr);
}

int main()
{
    ifstream fr("Duomenys.txt");
    ofstream fo("Rezultatai.txt");

    int sk, teplaPenkiu = 0, teplaTriju = 0, teplaVienu = 0, visoDid = 0;

    fr >> sk;

    teplaPenkiu = kiekTelpa(sk, 5);
    sk -= teplaPenkiu * 5;

    teplaTriju = kiekTelpa(sk, 3);
    sk -= teplaTriju * 3;

    fo << 5 << " " << teplaPenkiu << " " << endl;
    fo << 3 << " " << teplaTriju << endl;
    fo << 1 << " " << sk << endl;

    fr.close();
    fo.close();
}
