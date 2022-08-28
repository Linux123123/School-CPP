/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 10:30 03 05 2022

prekesKainaKart
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fr("duom.txt");
  ofstream fo("rez.txt");

  int n, kartai = 0;
  float x, y;

  vector<float> kainos;

  fr >> n;

  for (int i = 0; i < n; i++) {
    fr >> x >> y;
    kainos.push_back(x + (y / 100));
  }

  const float max = *max_element(kainos.begin(), kainos.end());

  for (auto i : kainos) {
    if (i == max) {
      kartai++;
    }
  }

  fo << kartai;

  fr.close();
  fo.close();
  return 0;
}
