// pavadinimas
#include <iostream>
using namespace std;

int main()
{
    int y, x, c;
    cout << "Kiek kainuoja stalas ir kede: ";
    cin >> y;
    cout << endl
         << "Kiek euru stalas prangesnis uz kede: ";
    cin >> x;

    c = (y - x) / 2;

    cout << endl
         << "Kede kainuoja: " << c << endl;
    cout << endl
         << "Stalas kainuoja: " << y - c << endl;

    return 0;
}