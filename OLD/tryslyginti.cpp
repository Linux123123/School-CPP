// tryslyginti

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b, c, maz;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> a;
    cout << "Irasykite antraji skaiciu: ";
    cin >> b;
    cout << "Irasykite treciaji skaiciu: ";
    cin >> c;
    if (a < b)
        maz = a;
    else
        maz = b;
    if (c < maz)
        maz = c;

    cout << "Maziausias yra: " << maz << endl;
    return 0;
}
