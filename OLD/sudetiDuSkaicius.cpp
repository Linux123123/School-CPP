/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 13:24 02 12 2020

sudetiDuSkaicius
*/

#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b;
  cout << "Iveskite dvizenkli skaiciu: ";
  cin >> a;
  cout << "Iveksite antraji dvizenkli sakiciu: ";
  cin >> b;
  if ((abs(a) > 9) && (abs(a) < 100) && (abs(b) > 9) && (abs(b) < 100)) {
    cout << "Lyginiu skaiciu suma bus: " << a + b << endl;
  } else {
    cout << "Skaicius ne dvizenklis!" << endl;
  }

  return 0;
}
