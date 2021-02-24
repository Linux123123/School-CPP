/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 23:26 10 02 2021

whileTeNeSum
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
    int tSk = 0, nSk = 0, tSum = 0, nSum = 0, sk = 0;
    cout << "Iveksite skaiciu: " << endl;
    cin >> sk;
    while (sk != 0) // Nulis nei teigimas, nei neigiamas.
    {
        if (sk > 0)
        {
            tSum += sk;
            tSk++;
        }
        else if (sk < 0)
        {
            nSum += sk;
            nSk++;
        }
        cout << "Iveksite dar viena skaiciu: " << endl;
        cin >> sk;
    }
    cout << "Lyginiu skaiciu suma: " << tSum << endl;
    cout << "Lyginiu skaiciu keikis: " << tSk << endl;
    cout << "Nelyginiu skaiciu suma: " << nSum << endl;
    cout << "Nelyginiu skaiciu keikis: " << nSk << endl;
    return 0;
}
