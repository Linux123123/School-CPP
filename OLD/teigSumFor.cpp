/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 22:53 03 03 2021

teigSumFor
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int i, prad, gal, kubSum = 0;
  cout << "Sudeti teigiamus skaicius" << endl;
  cout << "Iveskite pradine reiksme" << endl;
  cin >> prad;
  cout << "Iveskite galutine reiksme" << endl;
  cin >> gal;
  cout << endl;
  for (i = prad; i <= gal; i++) {
    if (i > 0) {
      kubSum += i;
      cout << i << endl;
    }
  }
  cout << endl;
  cout << "Skaiciu suma bus " << kubSum << endl;
  return 0;
}
