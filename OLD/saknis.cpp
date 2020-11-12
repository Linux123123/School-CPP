// saknis

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a;
    cout << "Iveskite skaiciu is kurio istraukti sakni: ";
    cin >> a;
    if (a >= 0){
        cout << "Ivesto skaiciaus saknis yra: " << setw (8) << fixed << setprecision(2) << sqrt(a) << endl;
    } else{
        cout << "Is ivesto skaiciau neimanoma istraukti saknies" << endl;
    }
    return 0;
}
