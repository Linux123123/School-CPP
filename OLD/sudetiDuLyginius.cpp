/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 13:34 02 12 2020

sudetiDuLyginius
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Iveskite skaiciu: ";
    cin >> a;
    cout << "Iveksite antraji sakiciu: ";
    cin >> b;
    if ((a % 2 == 0) && (b % 2 == 0))
    {
        cout << "Lyginiu skaiciu suma bus: " << a + b << endl;
    }
    else
    {
        cout << "Skaicius ne lyginis!" << endl;
    }

    return 0;
}