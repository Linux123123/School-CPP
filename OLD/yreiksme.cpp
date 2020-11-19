// yreiksme

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int x, y;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> x;
    if (x <= 0)
        y = 0;
    else
        y = 2 * x;
    cout << "y reiksme bus " << y << endl;
    return 0;
}
