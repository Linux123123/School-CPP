/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 12:15 09 05 2022

didzTarp
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fr("duom.txt");
  ofstream fo("rez.txt");

  int n, x;

  vector<int> skaiciai;

  fr >> n;

  for (int i = 0; i < n; i++) {
    fr >> x;
    skaiciai.push_back(x);
  }

  const int max = *max_element(skaiciai.begin(), skaiciai.end());
  const int min = *min_element(skaiciai.begin(), skaiciai.end());

  fo << max - min;

  fr.close();
  fo.close();
  return 0;
}
