#include <bits/stdc++.h>

using namespace std;

struct Lapeliai {
    int G = 0;
    int Z = 0;
    int R = 0;
};

int suklijuotaVeliaveliu (Lapeliai &lapeliai) {
    int veliaveliu = 0;

    while (true) {
        if (lapeliai.G < 2 || lapeliai.Z < 2 || lapeliai.R < 2) break;

        veliaveliu++;
        lapeliai.G -= 2;
        lapeliai.Z -= 2;
        lapeliai.R -= 2;
    }

    return veliaveliu;
}

int main()
{
    ifstream fr("U1.txt.");
    ofstream fo("U1rez.txt");

    int n, y;
    char x;

    fr >> n;

    Lapeliai lapeliai;

    for (int i = 0; i < n; i++) {
        fr >> x >> y;
        if (x == 'G') lapeliai.G += y;
        if (x == 'Z') lapeliai.Z += y;
        if (x == 'R') lapeliai.R += y;
    }

    fo << suklijuotaVeliaveliu(lapeliai) << endl;
    fo << "G = " << lapeliai.G << endl;
    fo << "Z = " << lapeliai.Z << endl;
    fo << "R = " << lapeliai.R << endl;

    fr.close();
    fo.close();
    return 0;
}
