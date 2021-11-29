/*
Sukurta: 12:15 22 11 2021

avalyne
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("DUOM.txt");
    ofstream fo("REZ.txt");

    int n;

    fr >> n;

    vector<float> mot;
    vector<float> vyr;

    for (int i = 0; i < n; i++)
    {
        string lyt;
        float kaina;
        fr >> lyt >> kaina;

        if (lyt == "v")
        {
            vyr.push_back(kaina);
        }
        else
        {
            mot.push_back(kaina);
        }
    }

    float perDienaMot = accumulate(mot.begin(), mot.end(), 0.0f);
    float perDienaVyr = accumulate(vyr.begin(), vyr.end(), 0.0f);
    float vidDienaMot = perDienaMot / mot.size();
    float vidDienaVyr = perDienaVyr / vyr.size();

    fo << "Moteriška avalynė: " << endl;
    fo << "per dieną parduota už "
       << setw(5) << fixed << setprecision(2)
       << perDienaMot << endl;
    fo << "Vidutiniškai batų pora kainavo "
       << setw(5) << fixed << setprecision(2)
       << vidDienaMot << endl;

    fo << "Vyriška avalynė: " << endl;
    fo << "per dieną parduota už "
       << setw(5) << fixed << setprecision(2)
       << perDienaVyr << endl;
    fo << "Vidutiniškai batų pora kainavo "
       << setw(5) << fixed << setprecision(2)
       << vidDienaVyr << endl;

    fo << "Iš viso per dieną parduota avalynės už "
       << setw(5) << fixed << setprecision(2)
       << perDienaMot + perDienaVyr << endl;

    fr.close();
    fo.close();
    return 0;
}
