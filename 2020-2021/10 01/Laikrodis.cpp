// pavadinimas
#include <iostream>
using namespace std;

int main()
{
    long x, y, m;
    cout << "Iveskite valanda: ";
    cin >> x;
    cout << endl
         << "Iveskite minute: ";
    cin >> y;
    cout << endl;

    m = x * 3600 + y * 60;

    cout << "Nuo vidurnakcio praejo: "
         << m
         << "min. ir "
         << m * 60
         << "s." << endl;
    return 0;
}