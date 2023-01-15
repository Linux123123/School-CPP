/*
Autorinës teisës (C) 2022, Linas Aleksandravièius, <me@linux123123.com>
Sukurta: 09:42 14 06 2022

progKonkur

2022 Egzamino pirma uzduotis
*/

#include <bits/stdc++.h>
using namespace std;

class Uzdavinys {
public:
  void nustatytiLaika(int laikas) { laikoLimit = laikas; }
  void nustatytiTaskus(int taskai) { maxTasku = taskai; }

public:
  int laikoLimit;
  int maxTasku;
};

class Dalyvis {
public:
  Dalyvis(string Vardas, vector<int> Laikai) {
    vardas = Vardas;
    laikai = Laikai;

    for (auto i : Laikai) {
      if (i > 0)
        teisingaiIsprest++;
      visasLaikas += i;
    }
  }

  void skaiciuotiTaskus(vector<Uzdavinys> uzdaviniai) {
    for (int i = 0; i < uzdaviniai.size(); i++) {
      int laikas = laikai[i];
      if (laikas == 0)
        continue;
      int maxTaskai = uzdaviniai[i].maxTasku;
      int maxLaikas = uzdaviniai[i].laikoLimit;

      if (laikas <= maxLaikas) {
        taskai += maxTaskai;
      } else
        taskai += (maxTaskai / 2);
    }
  }

public:
  string vardas;
  vector<int> laikai;
  int teisingaiIsprest = 0;
  int taskai = 0;
  int visasLaikas = 0;
};

int main() {
  ifstream fr("U1.txt");
  ofstream fo("U1rez.txt");

  vector<Uzdavinys> uzdaviniai;
  vector<Dalyvis> dalyviai;
  int u, x, daugTasku;
  char v[10];

  fr >> u;

  for (int i = 0; i < u; i++) {
    fr >> x;
    Uzdavinys uzd;
    uzd.nustatytiLaika(x);
    uzdaviniai.push_back(uzd);
  }

  for (int i = 0; i < u; i++) {
    fr >> x;
    uzdaviniai[i].nustatytiTaskus(x);
  }

  for (int i = 0; i < 5; i++) {
    fr.get(v, 11);
    // fr >> v;
    vector<int> laikai;
    for (int i = 0; i < u; i++) {
      fr >> x;
      laikai.push_back(x);
    }
    Dalyvis dalyvis(v, laikai);
    dalyvis.skaiciuotiTaskus(uzdaviniai);
    dalyviai.push_back(dalyvis);
  }

  sort(dalyviai.begin(), dalyviai.end(),
       [](const Dalyvis &kai, const Dalyvis &des) {
         return kai.taskai > des.taskai;
       });

  daugTasku = dalyviai[0].taskai;

  dalyviai.erase(remove_if(dalyviai.begin(), dalyviai.end(),
                           [daugTasku](Dalyvis const &d) {
                             return d.taskai != daugTasku;
                           }),
                 dalyviai.end());

  sort(dalyviai.begin(), dalyviai.end(),
       [](const Dalyvis &kai, const Dalyvis &des) {
         return kai.teisingaiIsprest > des.teisingaiIsprest;
       });

  fo << daugTasku << endl;

  for (auto dalyvis : dalyviai) {
    fo << setw(10) << fixed << left << dalyvis.vardas << " ";
    fo << dalyvis.teisingaiIsprest << " ";
    fo << dalyvis.visasLaikas << endl;
  }

  fr.close();
  fo.close();
  return 0;
}
