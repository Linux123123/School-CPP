/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 12:19 09 05 2022

pazymiai
*/

#include <bits/stdc++.h>
using namespace std;

int index(const vector<int> &arr, int item)
{
    auto ret = std::find(arr.begin(), arr.end(), item);

    if (ret != arr.end())
        return ret - arr.begin();
    return -1;
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");

    int n, x;

    vector<int> pazymiai(10, 0);
    vector<int> pazymiai_max;

    fr >> n;

    for (int i = 0; i < n; i++)
    {
        fr >> x;
        pazymiai[x - 1]++;
    }

    int max = *max_element(pazymiai.begin(), pazymiai.end());

    for_each(pazymiai.begin(), pazymiai.end(), [max, &pazymiai, &pazymiai_max](int &x)
             { 
                if (x == max)  {
                    const int indexas = index(pazymiai, x);
                    pazymiai_max.push_back(indexas + 1);
                    pazymiai[indexas] = 0;
                } });

    for (auto i : pazymiai_max)
    {
        if (i == pazymiai_max[0])
        {
            fo << i;
        }
        else
        {
            fo << "," << i;
        }
    }

    fr.close();
    fo.close();
    return 0;
}
