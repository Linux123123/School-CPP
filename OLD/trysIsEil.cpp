/*
Sukurta: 12:24 25 04 2022

trysIsEil
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, x;
    vector<int> v;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] - 1 == v[i - 1] && v[i] - 1 - 1 == v[i - 2])
        {
            fo << "TAIP" << endl;
            fr.close();
            fo.close();
            return 0;
        }
    }

    fo << "NE" << endl;

    fr.close();
    fo.close();
    return 0;
}
