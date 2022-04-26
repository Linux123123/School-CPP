/*
Sukurta: 12:21 25 04 2022

maxEle
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

    fo << *max_element(v.begin(), v.end());

    fr.close();
    fo.close();
    return 0;
}