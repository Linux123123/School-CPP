/*
Sukurta: 10:30 26 04 2022

temp
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int t, x;
    vector<int> v, ger;

    fr >> t;

    for (int i = 0; i < 30; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    for (auto i : v)
    {
        if (i > 0 && i <= t)
        {
            ger.push_back(i);
        }
    }

    fo << ger.size();

    fr.close();
    fo.close();
    return 0;
}
