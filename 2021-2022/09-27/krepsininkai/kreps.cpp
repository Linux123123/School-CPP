#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fd("komanda.txt");
    ofstream fr("metimai.txt");
    int n, m, surTaskai,taskai, tritaskiai;
    fd >> n;

    for (int i = 0; i < n; i++) {
        fd >> m;
        taskai = 0;
        tritaskiai = 0;
        for (int i = 0; i < m; i++) {
            fd >> surTaskai;
            if (surTaskai == 3) tritaskiai++;
            taskai += surTaskai;
        }
        fr << i + 1 << "-sis krepğininkas pelnë: "
         << taskai<< " ir tritağkiø: "
         << tritaskiai << endl;
    }

    fr.close();
    fr.close();

    return 0;
}
