/*
Autorinės teisės (C) 2020, Linas Aleksandravičius, <me@linux123123.com>

Sukurta: 08:57 17 12 2020

prekybaLedais
*/

#include <algorithm>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int k, m, n, vk;
  ifstream fd("data.txt");
  fd >> k >> m >> n;
  vk = (k + m) * n;
  cout << vk << endl;
  ofstream fr("res.txt");
  fr << vk << endl;
  fd.close();
  fr.close();
  return 0;
}
