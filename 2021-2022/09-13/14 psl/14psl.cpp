#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n, m, x, k = 0, s = 0;
    double y;
    fd >> n;
    fd >> x;
    fd >> y;
    for (int i = 1; i <= n; i++) {
        fd >> m;
        if (m >= x) k++;
        s += m;
    }h

    fr << s << endl << k << endl << round(s / y);

    fr.close();
    fd.close();

    return 0;
}
