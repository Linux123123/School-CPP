#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ifstream fd("programuotojai.txt");
    ofstream fr("isspresta.txt");

    int n, m, uzd, visoUzd = 0, zmogausUzd;
    double visoDienu = 0;

    fd >> n;

    for (int i = 0; i < n; i++)
    {
        fd >> m;
        visoDienu += m;
        zmogausUzd = 0;
        for (int i = 0; i < m; i++)
        {
            fd >> uzd;
            zmogausUzd += uzd;
            visoUzd += uzd;
        }
        fr << i + 1 << " programuotojas " << zmogausUzd << endl;
    }

    fr << "Viso išspręsta " << visoUzd << endl;
    fr << "Vidutiniškai 1 išsprendė " << setw(2) << fixed << setprecision(1) << visoUzd / visoDienu << endl;

    fd.close();
    fr.close();
    return 0;
}
