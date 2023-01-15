#include <bits/stdc++.h>

using namespace std;

int komplektu (int sachmatai[]) {
    int kiekiai [6];

    kiekiai[0] = floor(sachmatai[0] / 8.0);
    kiekiai[1] = floor(sachmatai[1] / 2.0);
    kiekiai[2] = floor(sachmatai[2] / 2.0);
    kiekiai[3] = floor(sachmatai[3] / 2.0);
    kiekiai[4] = floor(sachmatai[4] / 1.0);
    kiekiai[5] = floor(sachmatai[5] / 1.0);

    int maz = *min_element(kiekiai, kiekiai + 6);

    return maz;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, sachmatai [6] = {0,0,0,0,0,0},
        p, b, z, r, k, v;

    fr >> n;

    for (int i = 0; i < n; i++) {
        fr >> p >> b >> z >> r >> k >> v;
        sachmatai[0] += p;
        sachmatai[1] += b;
        sachmatai[2] += z;
        sachmatai[3] += r;
        sachmatai[4] += k;
        sachmatai[5] += v;
    }

    int komp = komplektu(sachmatai);

    fo << komp;

    fr.close();
    fo.close();
    return 0;
}
