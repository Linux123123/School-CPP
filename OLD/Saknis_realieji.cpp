// Saknis
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double num1;
    cout << "Iveskite skaiciu is kurio istraukti sakni: ";
    cin >> num1;
    cout << endl
         << "Rezultatas: " << setw(8) << fixed << setprecision(2) << sqrt(num1) << endl;
    return 0;
}