/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>
Sukurta: 12:57 08 09 2022

kalba
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fr("Duomenys.txt");
  ofstream fo("Rezultatai.txt");

  int n, d, z, k;

  // n -> kiek zodiziu reikia
  // d -> uz kiek dienu i norvergija
  // z -> pradinis ismoktu
  // k -> kiek daugiau per diena
  fr >> n >> d >> z >> k;

  int dienuMokos = 0, zodziuMoka = z, zodziuIsmoks = z;

  while (zodziuMoka <= n) {
    dienuMokos++;
    zodziuMoka += zodziuIsmoks;
    zodziuIsmoks += k;
  }

  fo << dienuMokos << endl;
  string result = (dienuMokos < d) ? "TAIP" : "NE";

  fo << result << endl;

  fr.close();
  fo.close();
  return 0;
}
