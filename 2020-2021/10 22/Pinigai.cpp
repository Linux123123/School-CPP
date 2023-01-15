// Pinigai

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    double m, prad, proc;
    cout << "Iveskite menesiu skaicius: ";
    cin >> m;
    cout << endl
         << "Iveskite pradini indeli: ";
    cin >> prad;
    cout << endl
         << "Ivekite metiniu palukanu procentus: ";
    cin >> proc;
    cout << endl
         << "Pinigai po " << m << " men. yra " << prad + prad * (proc / 100) * m << "Eur" << endl;
    return 0;
}
