// Laikrodis
#include <iostream>
using namespace std;

int main()
{
     long x, y, m;

     x = -1;
     y = -1;

     while ((x < 0) || (x > 24))
     {
          cout << "Iveskite valanda: ";
          cin >> x;
     }
     while ((y < 0) || (y > 60))
     {
          cout << "\nIveskite minute: ";
          cin >> y;
     }
     cout << endl;

     m = x * 3600 + y * 60;

     cout << "Nuo vidurnakcio praejo: "
          << m
          << "min. ir "
          << m * 60
          << "s." << endl;
     return 0;
}