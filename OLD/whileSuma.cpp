/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 08:22 28 01 2021

whileSuma
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
    cout << "Ivedamu skaiciu sumavimas" << endl;
    int sk, sum;
    sum = 0;
    cout << "Iveskite skaiciu" << endl;
    cin >> sk;
    while (sk != 888)
    {
        sum += sk;
        cout << "Iveskite dar viena skaiciu" << endl;
        cin >> sk;
    }
    cout << "Ivestu skaiciu suma bus lygi " << sum << endl;
}
