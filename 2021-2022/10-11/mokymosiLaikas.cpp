// mokymosi laikas

#include <bits/stdc++.h>
using namespace std;

int minIsValIrMin(int aVal, int aMin, int bVal, int bMin)
{
    return (bVal - aVal) * 60 + bMin - aMin;
}

int main()
{
    ifstream fd("DUOM.txt");
    ofstream fr("REZ.txt");

    int n, aVal, aMin, bVal, bMin, vMin = 0;

    fd >> n;

    for (int i = 0; i < n; i++)
    {
        fd >> aVal >> aMin >> bVal >> bMin;
        vMin += minIsValIrMin(aVal, aMin, bVal, bMin);
    }

    fr << vMin / 60 << " Val. " << vMin % 60 << " Min." << endl;

    fd.close();
    fr.close();
    return 0;
}
