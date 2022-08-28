/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 22:31 03 03 2021

sumFor
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int i, prad, gal, sum = 0;
  cout << "Sumuosime skaicius" << endl;
  cout << "Iveskite pradine reiksme" << endl;
  cin >> prad;
  cout << "Iveskite galutine reiksme" << endl;
  cin >> gal;
  cout << endl;
  for (i = prad; i <= gal; i++) {
    cout << i << endl;
    sum += i;
  }
  cout << endl;
  cout << "Skaiciu suma bus " << sum << endl;
  return 0;
}
