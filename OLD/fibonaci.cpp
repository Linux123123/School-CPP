/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 12:53 09 05 2022

fibonaci
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("U1.txt");
    ofstream fo("U1rez.txt");

    int n;

    fr >> n;

    unsigned long long int ats = round(pow((1 + sqrt(5)) / 2, n) / sqrt(5));

    fo << ats << endl;

    fr.close();
    fo.close();
    return 0;
}
