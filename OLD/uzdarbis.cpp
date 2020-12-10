/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 11:36 08 12 2020

uzdarbis
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    double s = 0;
    bool pirmas = true;
    ifstream fd("data.txt");
    for (string line; getline(fd, line);)
    // Kiek nori algu, bet jos turi buti kiekvienas naujoje eiluteje
    {
        if (pirmas)
        {
            pirmas = false;
            continue;
        }
        s += stod(line);
    }

    ofstream fr("res.txt");
    fr << "Alga: " << setw(4) << fixed << setprecision(2) << s << endl;
    cout << "Alga: " << setw(4) << fixed << setprecision(2) << s << endl;
    fd.close();
    fr.close();

    return 0;
}
