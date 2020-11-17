// ifpatikrinti 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Iveskite pirmaji skaiciu: ";
    cin >> a;
    cout << "Iveskite antraji skaiciu: ";
    cin >> b;
    if (a < b)
    {
        cout << a << " yra mazesnis uz " << b << endl;
    }
    return 0;
}
