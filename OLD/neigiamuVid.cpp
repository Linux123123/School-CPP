/*
Sukurta: 09:53 03 05 2022

neigiamuVid
*/

#include <bits/stdc++.h>
using namespace std;

float neigiamuVid(vector<int> v)
{
    float sk = 0;
    int vid = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            sk++;
            vid += v[i];
        }
    }
    if (sk == 0)
        return 0;
    return vid / sk;
}

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    vector<int> v;

    int n, m, x;

    fr >> n >> m;

    for (int i = 0; i < n * m; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    float vid = neigiamuVid(v);

    if (vid == 0)
        fo << "NO";
    else
        fo << fixed << setprecision(3) << vid;

    fr.close();
    fo.close();
    return 0;
}
