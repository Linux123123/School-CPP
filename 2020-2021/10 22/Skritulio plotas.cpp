// skritulio plotas

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

#define pi 3.1415

using namespace std;

int main()
{
    int r;
    cout << "Irasykite skritulio spinduli: ";
    cin >> r;
    cout << endl
         << "Skritulio plotas: " << pi * r * r << " cm2" << endl;
    return 0;
}
