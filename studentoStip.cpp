/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 23:45 10 02 2021

studentoStip
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
    int vid = 0, stip = 0, vStip = 0;
    string ats;
    cout << "Iveskite pirmojo studento vidurki: " << endl;
    cin >> vid;
    while (true)
    {
        if (vid < 0 || vid > 10)
        {
            cout << "Ivestas skaicius nera vidurkis! (0-10)" << endl;
        }
        else
        {
            if (vid >= 8)
                stip += 300;
            else if (vid >= 6)
                stip += 100;
            cout << "Mokinio stipendija: " << stip << endl;
            vStip += stip;
            stip = 0;
        }
        cout << "Ar norite testi? (t/N):" << endl;
        cin >> ats;
        if (ats != "t" && ats != "T")
        {
            cout << "Is viso stipendiju reiks sumoketi: " << vStip << endl;
            break; // arba galima ir return 0
        }
        cout << "Iveksite dar viena vidurki: " << endl;
        cin >> vid;
    }

    return 0;
}
