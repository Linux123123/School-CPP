// formuojamasis vertinimas

#include <bits/stdc++.h>
using namespace std;

void prideti(double &sudeta, double &pridetaNr, int a)
{
    if (a != 0)
    {
        sudeta += a;
        pridetaNr++;
    }
}

int vidurkis(int a, int b, int c)
{
    double sudeta = 0;
    double pridetaNr = 0;
    prideti(sudeta, pridetaNr, a);
    prideti(sudeta, pridetaNr, b);
    prideti(sudeta, pridetaNr, c);
    if (sudeta == 0)
        return 1;
    return ceil(sudeta / pridetaNr);
}

int main()
{
    ifstream fd("DUOM.txt");
    ofstream fr("REZ.txt");

    int n, p, a, t;

    fd >> n;

    for (int i = 0; i < n; i++)
    {
        fd >> p >> a >> t;
        fr << vidurkis(p, a, t) << endl;
    }

    fd.close();
    fr.close();
    return 0;
}
