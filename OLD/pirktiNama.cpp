/*
Sukurta: 12:39 25 04 2022

Pilnai neveikia 
pirktiNama
*/

#include <bits/stdc++.h>
using namespace std;

int atstumasTarp(vector<int> &vietos, int m, int n)
{
    auto itr = find(vietos.begin(), vietos.end(), n);
    auto vieta = distance(vietos.begin(), itr);
    if (vieta > m)
    {
        return vieta - m;
    }
    else
    {
        return m - vieta;
    }
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n, x, m, k, atstumas;
    vector<int> v, vietos, atstumai;

    v.push_back(0);

    fr >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    vietos = v;

    sort(v.begin(), v.end());

    for (auto i : v)
    {
        if (i == 0 || i > k)
            continue;
        atstumai.push_back(atstumasTarp(vietos, m, i));
    }

    fo << *min_element(atstumai.begin(), atstumai.end()) * 10;

    fr.close();
    fo.close();
    return 0;
}
