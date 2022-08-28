/*
Autorinės teisės (C) 2021, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 21:50 24 02 2021

ATS
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int kartai = 0;

  // 1
  for (int k = -1; k <= 4; k++) {
    kartai++;
  }
  cout << "Is viso karu atliekamas ciklas: " << kartai
       << endl; // Is viso 6 kartus

  // 2
  kartai = 0;
  int Sum = 5;
  for (int k = 1; k <= 5; k++) {
    kartai++;
    Sum += k;
  }
  cout << "Is viso karu atliekamas ciklas: " << kartai
       << endl;                    // Is viso 5 kartus
  cout << "Suma: " << Sum << endl; // Sum = 20

  /* 3 Cia mum gal klaidu reikejo ieskot?
  Kintamasis k naudojamas ir rezultatui ir for ciklui
  (tai prideda po 1 kiekviena karta ir po 10 kai lyginis)
  (ir kai k = 10 tai iskarto pasibaigia nes 10 + 10 + 1 > 16)
  Uzduotyje nera skliausteliu prie if
  Yra parasyta k % 2 = 0 kai turetu buti k % 2 == 0
  c++ neturi then (Cia Bash lyg ir)
  */
  kartai = 0;
  int k = 0;
  for (k = 10; k <= 16; k++) {
    kartai++;
    if (k % 2 == 0)
      k += 10;
  }
  cout << "Is viso karu atliekamas ciklas: " << kartai
       << endl;                       // Is viso 5 kartus
  cout << "Rezultats: " << k << endl; // Rezultatas 22
  return 0;
}
