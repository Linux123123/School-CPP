#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("suoliai.txt");
    ofstream fr("sportininkai.txt");
    int n, x, y, q, k, nr;
    fd >> n >> k;

    for (int i = 0; i < n; i++) {
        fd >> nr >> x >> y >> q;
        if (x >= k || y >= k || q >= k) {
            fr << nr << endl;
        }
    }

    fr.close();
    fr.close();

    return 0;
}
