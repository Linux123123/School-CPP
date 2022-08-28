/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 14:02 02 12 2020

trikampis
*/

#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a, b, c;
  cout << "Irasykite pirmaji skaiciu: ";
  cin >> a;
  cout << "Irasykite antraji skaiciu: ";
  cin >> b;
  cout << "Irasykite treciaji skaiciu: ";
  cin >> c;
  if ((a + b > c) && (a + c > b) && (b + c > a)) {
    if ((a == b) && (b == c)) {
      cout << "Trikampis yra lygiakrastis" << endl;
    } else if ((a == b) || (b == c) || (a == c)) {
      cout << "Trikampis yra lygiasonis" << endl;
    }
  } else
    cout << "Trikampio sudaryti negalima!" << endl;
  return 0;
}
