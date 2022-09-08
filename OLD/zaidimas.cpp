/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>
Sukurta: 12:30 08 09 2022

zaidimas
*/

#include <bits/stdc++.h>
using namespace std;

class Pora {
public:
  Pora(int s1, int s2) {
    sk1 = s1;
    sk2 = s2;
    suma = s1 + s2;
  }

public:
  int sk1;
  int sk2;
  int suma;
  int vieta;
};

int main() {
  ifstream fr("Duomenys.txt");
  ofstream fo("Rezultatai.txt");

  int n, x, y;
  vector<Pora> poros;

  fr >> n;

  for (int i = 0; i < n / 2; i++) {
    fr >> x >> y;
    Pora pora(x, y);
    poros.push_back(pora);
  }

  sort(poros.begin(), poros.end(),
       [](const Pora &a, const Pora &b) { return a.suma > b.suma; });

  auto geriausia = poros[0];

  auto vieta = (geriausia.sk1 > geriausia.sk2) ? 1 : 2;

  fo << geriausia.suma << " " << geriausia.sk1 << " " << geriausia.sk2 << endl
     << vieta << endl;

  fr.close();
  fo.close();
  return 0;
}
