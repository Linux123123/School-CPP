// dalusis5

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int skaicius;
    cout << "Irasykite pirmaji skaiciu: ";
    cin >> skaicius;
    if (skaicius % 5 == 0)
        cout << "Skaicius yra dalus is 5!" << endl;
    else
        cout << "Skaicius nera dalus is 5!" << endl;
    return 0;
}
