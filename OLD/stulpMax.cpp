/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>
Sukurta: 20:01 28 08 2022

stulpMax
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fr("U1.txt");
  ofstream fo("U1rez.txt");

  int n, m, sum = 0;

  fr >> n >> m;

  int stulpeliai[m][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      fr >> stulpeliai[j][i];
    }
  }

  for (int i = 0; i < m; i++) {
    sum += *max_element(stulpeliai[i], stulpeliai[i] + n);
  }

  fo << sum;

  fr.close();
  fo.close();

  return 0;
}
