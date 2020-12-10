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
    float s = 0;
    bool pirmas = true;
    ifstream fd("data.txt");
    for (string line; getline(fd, line);)
    {
        if (pirmas)
        {
            pirmas = false;
            continue;
        }
        s += stoi(line);
    }

    ofstream fr("res.txt");
    fr << "Alga: " << s << endl;
    cout << "Alga: " << s << endl;
    fd.close();
    fr.close();

    return 0;
}
