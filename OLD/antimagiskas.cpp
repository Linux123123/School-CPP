/*
Sukurta: 12:40 22 11 2021

antimagiskas
*/

#include <bits/stdc++.h>
using namespace std;

int eilSuma(vector<int> &eil)
{
    return accumulate(eil.begin(), eil.end(), 0);
}

bool arIsEiles(vector<int> const &sumos)
{
    for (int i = 0; i < sumos.size(); i++)
    {
        if (sumos[i] != sumos[i + 1] - 1 && sumos[i + 1] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>> sk;

    for (int i = 0; i < n; i++)
    {
        vector<int> tarp;
        for (int j = 0; j < n; j++)
        {
            int skaicius;
            cin >> skaicius;
            tarp.push_back(skaicius);
        }
        sk.push_back(tarp);
    }

    vector<int> sumos;

    for (int i = 0; i < sk.size(); i++)
    {
        sumos.push_back(eilSuma(sk[i]));
    }

    for (int i = 0; i < sk.size(); i++)
    {
        vector<int> stul;
        for (int j = 0; j < n; j++)
        {
            stul.push_back(sk[j][i]);
        }
        sumos.push_back(eilSuma(stul));
    }

    int kairVirDesApaSum = 0;
    for (int i = 0; i < sk.size(); i++)
    {
        kairVirDesApaSum += sk[i][i];
    }

    sumos.push_back(kairVirDesApaSum);

    int kairApacDesVirSum = 0;
    for (int i = sk.size(); i-- > 0;)
    {
        kairApacDesVirSum += sk[sk.size() - 1 - i][i];
    }

    sumos.push_back(kairApacDesVirSum);

    sort(sumos.begin(), sumos.end());

    // for (int i = 0; i < sumos.size(); i++)
    // {
    //     cout << sumos[i] << endl;
    // }

    if (arIsEiles(sumos))
    {
        cout << sumos[0] << endl;
        cout << sumos[sumos.size() - 1];
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
