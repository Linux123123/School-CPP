// dulyginti

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b, maz;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> a;
    cout << "Irasykite antraji skaiciu: ";
    cin >> b;
    if (a < b)
        maz = a;
    else
        maz = b;
    if (a == b)
        cout << "Skaiciai yra lygus!" << endl;
    else
        cout << "Mazesnis yra " << maz << "!" << endl;
    return 0;
}
