// ket mokykla

#include <bits/stdc++.h>
using namespace std;

int didziausias(int &p, int &a, int &t)
{
    return max({p, a, t});
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
        fr << didziausias(p, a, t) << endl;
    }

    fd.close();
    fr.close();
    return 0;
}
