/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <linas.alexx@gmail.com>

Sukurta: 11:35 15 10 2020

Sveikuju skaiciu dalyba
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void consoleOutNL(const string &in)
{
    cout << in << endl;
}

void consoleOut(const string &in)
{
    cout << in;
}

string consoleInStr()
{
    string out;
    getline(cin, out);
    return out;
}

int consoleInInt()
{
    int out;
    cin >> out;
    return out;
}

int main()
{
    consoleOut("43 / 8 = ");
    cout << 43 / 8 << endl;
    consoleOut("32 / 4 = ");
    cout << 32 / 4 << endl;
    consoleOut("35 % 5 = ");
    cout << 35 % 5 << endl;
    consoleOut("32 % 4 = ");
    cout << 32 % 4 << endl;
    consoleOut("17 % (3 + 7 / 3) * 2 = ");
    cout << 17 % (3 + 7 / 3) * 2 << endl;
    return 0;
}
