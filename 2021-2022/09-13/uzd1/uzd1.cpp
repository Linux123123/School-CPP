#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");
    int n, m, s =0;
    fd >> n;
    for (int i = 1; i <= n; i++) {
        fd >> m;
        s += m;
    }

    fr << s << endl;

    fr.close();
    fd.close();

    return 0;
}
