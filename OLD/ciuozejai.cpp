/*
Sukurta: 12:29 02 05 2022

ciuozejai
*/

#include <bits/stdc++.h>
using namespace std;

void isimtiMazIrDid(vector<float> &sk)
{
    auto minEle = min_element(sk.begin(), sk.end());
    sk.erase(minEle);
    auto maxEle = max_element(sk.begin(), sk.end());
    sk.erase(maxEle);
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, a, b;

    vector<float> ska, skb;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> a >> b;
        ska.push_back(a);
        skb.push_back(b);
    }

    isimtiMazIrDid(ska);
    isimtiMazIrDid(skb);

    float aVid = accumulate(ska.begin(), ska.end(), 0.0) / ska.size();
    float bVid = accumulate(skb.begin(), skb.end(), 0.0) / skb.size();

    fo << aVid << endl
       << bVid;

    fr.close();
    fo.close();
    return 0;
}
