#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n;
    double m, x = 0;
    fd >> n;
    for (int i = 1; i <= n; i++) {
        fd >> m;
        x += m;
    }

    fr << x << endl << x / n << endl;

    fr.close();
    fd.close();

    return 0;
}
