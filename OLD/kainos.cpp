/*
Sukurta: 10:17 26 04 2022

kainos
*/

#include <bits/stdc++.h>
using namespace std;

float average(vector<float> &v)
{
    return accumulate(v.begin(), v.end(), 0.0) / v.size();
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, x, proc;
    vector<float> v;

    fr >> n >> proc;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        v.push_back(x);
    }

    float kainuVid = average(v);

    for (int i = 0; i < n; i++)
    {
        if (v[i] < kainuVid)
        {
            v[i] = v[i] * (1.00 + proc / 100.00);
        }
    }

    fo << fixed << setprecision(2) << average(v) << endl;

    fr.close();
    fo.close();
    return 0;
}
