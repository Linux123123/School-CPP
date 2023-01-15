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

    fr << kompleksinai << " moksleiviai valgë kompleksinius" << endl;
    fr << gerimai << " moksleiviai gërë gërimà" << endl;
    fr << antrasPatiek << " moksleiviai valgë antrà patiekalà" << endl;
    fr << sriuba << " moksleiviai valgë sriubà" << endl;
    fr << desertas << " moksleiviai valgë desertà" << endl;

    fr.close();
    fr.close();

    return 0;
}
