// sudeti2sk

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> a;
    cout << "Irasykite antraji skaiciu: ";
    cin >> b;
    if (a > 0 && b > 0)
        cout << "Teigiamu skaiciu suma bus " << a + b << "!" << endl;
    else
        cout << "Buvo ivestas neigiamas skaicius!" << endl;
    return 0;
}
