/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 22:43 03 03 2021

kubSumFor
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
    int i, prad, gal, kubSum = 0;
    cout << "Pakelti kubu skaicius" << endl;
    cout << "Iveskite pradine reiksme" << endl;
    cin >> prad;
    cout << "Iveskite galutine reiksme" << endl;
    cin >> gal;
    cout << endl;
    for (i = prad; i <= gal; i += 2)
    {
        cout << i << endl;
        kubSum += pow(i, 3);
    }
    cout << endl;
    cout << "Skaiciu suma bus " << kubSum << endl;
    return 0;
}
