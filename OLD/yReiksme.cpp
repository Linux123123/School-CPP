/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 13:43 02 12 2020

yReiksme
*/

#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int x, y;
  cout << "Iveskite skaiciu: ";
  cin >> x;
  if (x < 0) {
    y = 0;
    cout << "Y: " << y << endl;
  } else if (x <= 10 && x >= 0)
  // Kitaip negu uzduotyje, nes ten tikriausiai yra klaida
  {
    y = x;
    cout << "Y: " << y << endl;
  } else if (x > 10) {
    y = 2 * x;
    cout << "Y: " << y << endl;
  } else {
    cout << "Neimanoma!" << endl;
  }

  return 0;
}
