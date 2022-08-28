/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 10:07 03 05 2022

daugMen
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fr("duom.txt");
  ofstream fo("rez.txt");

  int n, x;

  fr >> n;

  vector<int> v(12, 0), ats;

  for (int i = 0; i < n; i++) {
    fr >> x >> x;
    v[x - 1]++;
    fr >> x;
  }

  int max = *max_element(v.begin(), v.end());

  int kiekMax =
      count_if(v.begin(), v.end(), [max](const int &a) { return a == max; });

  if (kiekMax == 1) {
    ats.push_back(distance(v.begin(), max_element(v.begin(), v.end())) + 1);
  } else {
    for (int i = 0; i < kiekMax; i++) {
      ats.push_back(distance(v.begin(), max_element(v.begin(), v.end())) + 1);
      v[distance(v.begin(), max_element(v.begin(), v.end()))] = -1;
    }
  }

  for (auto i : ats) {
    if (i == ats[ats.size() - 1]) {
      fo << i;
      continue;
    }
    fo << i << ",";
  }

  fr.close();
  fo.close();
  return 0;
}
