//programos pavadinimas

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Tautvydo gimtadienis" << endl;
    double a, men, d, v;
    cout << "Koks mokinio amzius:" << endl;
    cin >> a;
    men = a * 12;
    d = a * 365;
    v = d * 24;
    cout << "Tautvydas gyvena:  " << men << " men. " << d << " d. " << v << " val." << endl;

    return 0;
}
