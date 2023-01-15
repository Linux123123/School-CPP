#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n, m, k, x;
    fd >> k;
    fd >> m;
    fd >> n;

    for (int i = 0; i < n; i ++) {
        x += k;
        k += m;
    }

    fr << x << endl;

    fr.close();
    fd.close();

    return 0;
}
