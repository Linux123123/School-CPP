/*
Sukurta: 12:32 25 04 2022

didzDaugyba
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, x, didPlius, didMinus;
    vector<int> v;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    didPlius = v[n - 1] * v[n - 2];
    didMinus = v[0] * v[1];

    fo << max(didPlius, didMinus);

    fr.close();
    fo.close();
    return 0;
}