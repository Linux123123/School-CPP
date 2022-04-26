/*
Sukurta: 10:13 26 04 2022

apsuktiMasyva
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, x;
    vector<int> v;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    reverse(v.begin(), v.end());

    for (auto i : v)
    {
        if (i != v[v.size() - 1])
            fo << i << " ";
        else
            fo << i;
    }

    fr.close();
    fo.close();
    return 0;
}
