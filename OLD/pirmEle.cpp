/*
Sukurta: 12:17 25 04 2022

pirmEle
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

    fo << v[0];

    fr.close();
    fo.close();
    return 0;
}
