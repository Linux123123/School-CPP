// Dalyba realieji
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     double num1, num2;
     cout << "Iveskite pirmaji skaiciu: ";
     cin >> num1;
     cout << endl
          << "Iveksite antraji skaiciu: ";
     cin >> num2;
     cout << endl
          << "Rezultatas: " << setw(8) << fixed << setprecision(2) << num1 / num2 << endl;
     return 0;
}