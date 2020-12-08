/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 11:23 08 12 2020

vidurkisIsFailo
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    float a, b, c, d, e, s;
    ifstream fd("data.txt");
    fd >> a >> b >> c >> d >> e;
    s = (a + b + c + d + e) / 5;
    ofstream fr("res.txt");
    fr << "Vidurkis: " << s << endl;
    cout << "Vidurkis: " << s << endl;
    fd.close();
    fr.close();
    return 0;
}
