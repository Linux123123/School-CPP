// Kvadratine_Lygtis

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    float a, b, c, x1, x2, diskriminantas, tikrojiDalis, isgalvotaDalis;
    cout << "Irasykite a: ";
    cin >> a;
    cout << "Irasykite b: ";
    cin >> b;
    cout << "Irasykite c: ";
    cin >> c;
    diskriminantas = b * b - 4 * a * c;

    cout << "Diskriminantas yra: " << diskriminantas << endl;
    cout << "Diskriminanto kvadratas yra: " << sqrt(diskriminantas) << endl;

    if (diskriminantas > 0)
    {
        x1 = (-b + sqrt(diskriminantas)) / (2 * a);
        x2 = (-b - sqrt(diskriminantas)) / (2 * a);
        cout << "Saknys yra tikros ir skirtingos." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (diskriminantas == 0)
    {
        cout << "Saknys yra tikros ir vienodos." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        tikrojiDalis = -b / (2 * a);
        isgalvotaDalis = sqrt(-diskriminantas) / (2 * a);
        cout << "Saknys yra sunkios ir skirtingos" << endl;
        cout << "x1 = " << tikrojiDalis << "+" << isgalvotaDalis << "i" << endl;
        cout << "x2 = " << tikrojiDalis << "-" << isgalvotaDalis << "i" << endl;
    }

    return 0;
}
