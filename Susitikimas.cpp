/*
Autorinės teisės (C) 2022, Linas Aleksandravičius, <me@linux123123.com>
Sukurta: 08:21 14 09 2022

Susitikimas
*/

#include <bits/stdc++.h>

using namespace std;

void kadaAtvyks(int d, int v, int m, int vazV, int vazM, int &atvykD,
                int &atvykV, int &atvykMin) {
  int isvykLaik = d * 24 * 60 + v * 60 + m;
  int atVykLaikaisSec = (isvykLaik + vazV * 60 + vazM) * 60;

  time_t seconds(atVykLaikaisSec);
  tm *p = gmtime(&seconds);

  atvykD = p->tm_yday;
  atvykV = p->tm_hour;
  atvykMin = p->tm_min;
}

bool arSpes(int aD, int aV, int aM, int sD, int sV, int sM) {
  int atvykimasMin = aD * 24 * 60 + aV * 60 + aM;
  int susitikimoMin = sD * 24 * 60 + sV * 60 + sM;

  if (atvykimasMin <= susitikimoMin)
    return true;

  return false;
};

int main() {
  ifstream fr("Duomenys.txt");
  ofstream fo("Rezultatai.txt");

  int a, b, c, d, e, ds, v, m, aD, aV, aM;

  fr >> a >> b >> c >> d >> e >> ds >> v >> m;

  kadaAtvyks(a, b, c, d, e, aD, aV, aM);

  auto spes = arSpes(aD, aV, aM, ds, v, m);

  fo << aD << " " << aV << " " << aM << endl;
  string taipNe = spes ? "Taip" : "Ne";
  fo << taipNe << endl;

  fr.close();
  fo.close();
}
