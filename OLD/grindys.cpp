#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

double grinduKaina(double ilgis, double plotis, double kaina)
{
    return ilgis * plotis * kaina * 1.03;
}

int main()
{
    ifstream fd("data.txt");
    ofstream fr("out.txt");

    int n;
    double kaina = 0, x, y, p;

    fd >> n;

    for (int i = 0; i < n; i++)
    {
        fd >> x >> y >> p;
        kaina += grinduKaina(x, y, p);
    }

    fr << kaina << endl;

    fd.close();
    fr.close();
    return 0;
}
