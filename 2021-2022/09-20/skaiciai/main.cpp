#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n, x, k = 0;
    fd >> n;

    for (int i = 0; i < n; i++) {
        fd >> x;
        if (x % 2 == 0) k++;
    }

    if (k > 0)
    {
        fr << k << endl;
    } else {
        fr << "NËRA" << endl;
    }

    fr.close();
    fd.close();

    return 0;
}
