#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n, x, b, a, t = 0;
    double y;
    fd >> n >> x >> b;
    for (int i = 1; i <= n; i++) {
        fd >> y >> a;
        if (a < x) y += (x-a) * b;
        t += y;
    }

    fr << t << endl;

    fr.close();
    fd.close();

    return 0;
}
