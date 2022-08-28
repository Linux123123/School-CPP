/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>
Sukurta: 12:12 20 06 2022

sportasNamie
*/

#include <bits/stdc++.h>
using namespace std;

template <typename C, typename T> bool contains(C &&c, T e) {
  return std::find(std::begin(c), std::end(c), e) != std::end(c);
};

class Pratimas {
public:
  Pratimas(char pavadinimas[14]) {}
  int visasLaikas = 0;
  int rytas = 0;
  int diena = 0;
  int vakaras = 0;
};

int main() {
  ifstream fr("U2.txt");
  ofstream fo("U2rez.txt");

  int d, s, laikas;

  char prat[14];
  char metas[7];

  vector<Pratimas> pratimai;

  fr >> d;

  for (int i = 0; i < d; i++) {
    fr >> s;
    for (int y = 0; y < s; y++) {
      fr.ignore(1);
      fr.get(prat, 14);
      fr.ignore(1);
      fr.get(metas, 7);
      fr.ignore(1);
      fr >> laikas;

      Pratimas pratimas(prat);

      if (contains(pratimai, pratimas)) {
        cout << "Hello" << endl;
      } else {
        p
      }
    }
  }

  fr.close();
  fr.close();
  return 0;
}
