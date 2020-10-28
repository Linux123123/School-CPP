// Inicialai
#include <iostream>
using namespace std;

void bruksneliai()
{
    for (size_t i = 0; i < 30; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void inicialai()
{
    cout << " " << endl;
    cout << "   |                     *" << endl;
    cout << "   |                    * *" << endl;
    cout << "   |                   *   *" << endl;
    cout << "   |                  *******" << endl;
    cout << "   |                 *       *" << endl;
    cout << "   |                *         *" << endl;
    cout << "   |               *           *" << endl;
    cout << "   |__________    *             *" << endl;
    cout << " " << endl;
}

int main()
{
    string taip;
    bruksneliai();
    cout << "Sveiki, mano vardas Linas" << endl;
    bruksneliai();
    inicialai();
    bruksneliai();
    while (taip != "taip")
    {
        cout << "Irasykite taip, kad pabaigti: ";
        cin >> taip;
    }
}