// Sraige

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int z, c, v;
    cout << "Irasykite kiek per valanda ziogo suoliu: ";
    cin >> z;
    cout << endl
         << "Irasykite centimetru nusoka ziogas: ";
    cin >> c;
    cout << endl
         << "Kiek valandu?: ";
    cin >> v;
    cout << endl
         << "Sraige nusliauze " << z * c * v << "cm" << endl;

    return 0;
}
