// Pakelti kvadratu
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1;
    cout << "Iveskite skaiciu kuri pakelti kvadratu: ";
    cin >> num1;
    cout << endl
         << "Rezultatas: " << setw(8) << fixed << setprecision(2) << num1 * num1 << endl;
    return 0;
}