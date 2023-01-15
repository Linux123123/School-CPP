#include <bits/stdc++.h>
using namespace std;

vector<int> rastiDidz (vector<int> sk)
{
    vector<int> didziausi;
    int didz = *max_element(sk.begin(), sk.end());

    for (auto i : sk)
    {
        if (i == didz)
        {
            didziausi.push_back(i);
        }
    }

    return didziausi;
}

int rastiVieta (vector<int> sk, int x)
{
    int k;
    for (int i = 0; i < sk.size(); i++)
    {
        if (sk[i] == x)
        {
            k = i;
            return ++k;
        }
    }
}

void suskSkyr(vector<int> skyrBalai, vector<int> &taskai)
{
    if (skyrBalai[0] == skyrBalai[1] && skyrBalai[1] == skyrBalai[2]) return;

    int didz = *max_element(skyrBalai.begin(), skyrBalai.end());

    vector<int> didzSk;

    for (int i = 0; i < 3; i++)
    {
        if (skyrBalai[i] == didz)
        {
            didzSk.push_back(i);
        }
    }

    if (didzSk.size() == 1)
    {
        taskai[didzSk[0]] += 4;
        return;
    }

    for (auto i : didzSk)
    {
        taskai[i] += 2;
    }
};

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int k, x;

    vector<int> skyrBalai = {0,0, 0};
    vector<int> balai = { 0, 0, 0 };
    vector<int> taskai = { 0, 0, 0 };
    vector<int> dirTaskai = { 0, 0, 0 };

    fr >> k;

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            fr >> x;
            skyrBalai[j] = x;

            balai[j] += x;
        }

        suskSkyr(skyrBalai, taskai);
    }

    fr >> dirTaskai[0] >> dirTaskai[1] >> dirTaskai[2];

    vector<int> didz = rastiDidz(taskai);

    if (didz.size() != 1)
    {
        taskai[0] += dirTaskai[0];
        taskai[1] += dirTaskai[1];
        taskai[2] += dirTaskai[2];

        didz = rastiDidz(taskai);
    }

    fo << balai[0] << " " << balai[1] << " " << balai[2] << endl;
    fo << taskai[0] << " " << taskai[1] << " " << taskai[2] << endl;
    fo << rastiVieta(taskai, didz[0]);

    fr.close();
    fo.close();
    return 0;
}
