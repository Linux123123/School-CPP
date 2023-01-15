#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("valgiai.txt");
    ofstream fr("mokiniai.txt");
    int n, x, q, kompleksinai = 0,
    gerimai = 0, antrasPatiek = 0,
    sriuba = 0, desertas = 0;
    fd >> n;

    for (int i = 0; i < n; i++) {
        fd >> x;
        if (x == 0) {
            kompleksinai++;
            continue;
        }
        for (int i = 0; i < x; i++) {
            fd >> q;
            if (q == 1) {
                gerimai++;
            } else if (q == 2) {
                antrasPatiek++;
            } else if (q == 3) {
                sriuba++;
            } else if (q == 4) {
                desertas++;
            }
        }
    }

    fr << kompleksinai << " moksleiviai valg� kompleksinius" << endl;
    fr << gerimai << " moksleiviai g�r� g�rim�" << endl;
    fr << antrasPatiek << " moksleiviai valg� antr� patiekal�" << endl;
    fr << sriuba << " moksleiviai valg� sriub�" << endl;
    fr << desertas << " moksleiviai valg� desert�" << endl;

    fr.close();
    fr.close();

    return 0;
}
