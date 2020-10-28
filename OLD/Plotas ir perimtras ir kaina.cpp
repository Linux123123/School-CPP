// Platas ir perimetras ir kaina
#include <iostream>
using namespace std;

int main()
{
     int ilgis, plotis, plotas;
     int kaina_metrui = 25;
     cout << "Iveskite klases ilgi: ";
     cin >> ilgis;
     cout << endl
          << "Iveskite klases ilgi: ";
     cin >> plotis;
     cout << endl
          << "Plotas: " << plotis * ilgis << "m." << endl;
     cout << endl
          << "Perimetras: " << 2 * plotis + 2 * ilgis << "m." << endl;
     cout << endl
          << "Kaina: " << plotis * ilgis * kaina_metrui << "m." << endl;

     return 0;
}
