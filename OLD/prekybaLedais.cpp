/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 08:57 17 12 2020

prekybaLedais
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int k, m, n, vk;
    ifstream fd("data.txt");
    fd >> k >> m >> n;
    vk = (k + m) * n;
    cout << vk << endl;
    ofstream fr("res.txt");
    fr << vk << endl;
    fd.close();
    fr.close();
    return 0;
}
