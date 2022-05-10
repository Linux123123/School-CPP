/*
Sukurta: 12:12 02 05 2022

ugiai
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, p, x;

    vector<int> sk;

    fr >> n >> p;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        sk.push_back(x);
    }

    sk.erase(remove_if(
                 sk.begin(), sk.end(),
                 [p](const int &x)
                 {
                     return x <= p;
                 }),
             sk.end());

    for (auto i : sk)
    {
        if (i == sk[sk.size() - 1])
        {
            fo << i;
            continue;
        }
        fo << i << " ";
    }

    fr.close();
    fo.close();
    return 0;
}
