// Vidurkis
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1, num2, num3;
    cout << "Iveskite pirmaji skaiciu: ";
    cin >> num1;
    cout << endl
         << "Iveskite antraji skaiciu: ";
    cin >> num2;
    cout << endl
         << "Iveskite treciaji skaiciu: ";
    cin >> num3;
    cout << endl
         << "Rezultatas: " << setw(8) << fixed << setprecision(2) << (num1 + num2 + num3) / 3 << endl;
    return 0;
}