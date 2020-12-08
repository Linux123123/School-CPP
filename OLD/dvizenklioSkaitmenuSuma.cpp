// Dvizenklio skaiciaus skaitmenu suma (ir teigiamu)

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a;
    string in;
    cout << "Irasykite skaiciu: ";
    cin >> a;
    cout << "Ar turi buti teigiamas? (y/N)";
    cin >> in;
    if (in == "y" || in == "Y")
    {
        if (a > 0)
        {
            if ((a > 9 && a < 100))
            {
                cout << "Skaitmenu suma: " << (a / 10) + (a % 10) << endl;
            }
            else
            {
                cout << "Skaicius nera dvizenklis!" << endl;
            }
        }
        else
        {
            cout << "Skaicius nera teigiamas!" << endl;
        }
    }
    else if ((abs(a) > 9 && abs(a) < 100))
    {
        cout << "Skaitmenu suma: " << (abs(a) / 10) + (abs(a) % 10) << endl;
    }
    else
    {
        cout << "Skaicius nera dvizenklis!" << endl;
    }
    return 0;
}