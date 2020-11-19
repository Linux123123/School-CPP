// artrikampis

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> a;
    cout << "Irasykite antraji skaiciu: ";
    cin >> b;
    cout << "Irasykite treciaji skaiciu: ";
    cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
        cout << "Trikampi sudaryti galima!" << endl;
    else
        cout << "Trikampio sudaryti negalima!" << endl;
    return 0;
}
