/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 22:48 03 03 2021

lygSumFor
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
    int i, k, prad, gal, sum = 0;
    cout << "Lyginiu skaiciu suma" << endl;
    cout << "Iveskite pradine reiksme" << endl;
    cin >> prad;
    cout << "Iveskite galutine reiksme" << endl;
    cin >> gal;
    cout << endl;
    for (i = prad; i <= gal; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            k++;
            cout << i << endl;
        }
    }
    cout << endl;
    cout << "Skaiciu suma bus " << sum << endl;
    cout << "Lyginiu skaiciu kiekis " << k << endl;
    return 0;
}
