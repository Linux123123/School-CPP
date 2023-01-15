#include <bits/stdc++.h>
using namespace std;

struct Diena {

  int diena;

  int laikas;
};

int main() {

  Diena D[50];
  int d;

  Skaityti(D, d);

  int maziausias_laikas = MaziausiasLaikas(D, d);

  Rasyti(D, d, maziausias_laikas);

  return 0;
}

bool TikrintiLaika(int pradzia_valanda, int pradzia_minute, int pabaiga_valanda,
                   int pabaiga_minute) {

  return (pradzia_valanda != 0 || pradzia_minute != 0 || pabaiga_valanda != 0 ||
          pabaiga_minute != 0);
}

int SkaiciuotiLaika(int pradzia_valanda, int pradzia_minute,
                    int pabaiga_valanda, int pabaiga_minute) {

  return (pabaiga_valanda * 60 + pabaiga_minute - pradzia_valanda * 60 -
          pradzia_minute);
}

void Skaityti(Diena D[], int &d) {

  ifstream fd("U1.txt");

  d = 0;

  int n;

  int diena;

  int rytas_pr_val, rytas_pr_min, rytas_pb_val, rytas_pb_min, vakaras_pr_val,
      vakaras_pr_min, vakaras_pb_val, vakaras_pb_min;

  fd >> n;

  for (int i = 1; i <= n; i++) {

    fd >> diena >> rytas_pr_val >> rytas_pr_min >> rytas_pb_val >> rytas_pb_min

        >> vakaras_pr_val >> vakaras_pr_min >> vakaras_pb_val >> vakaras_pb_min;

    if (TikrintiLaika(rytas_pr_val, rytas_pr_min, rytas_pb_val, rytas_pb_min)

        && TikrintiLaika(vakaras_pr_val, vakaras_pr_min, vakaras_pb_val,
                         vakaras_pb_min))

    {

      D[d].diena = diena;

      D[d].laikas = SkaiciuotiLaika(rytas_pr_val, rytas_pr_min, rytas_pb_val,
                                    rytas_pb_min)

                    + SkaiciuotiLaika(vakaras_pr_val, vakaras_pr_min,
                                      vakaras_pb_val, vakaras_pb_min);

      d++;
    }
  }

  fd.close();
}

int MaziausiasLaikas(Diena D[], int d) {

  int maziausio_vieta = 0;

  for (int i = 0; i < d; i++)

    if (D[i].laikas < D[maziausio_vieta].laikas)
      maziausio_vieta = i;

  return maziausio_vieta;
}

void Rasyti(Diena D[], int d, int maziausias_laikas) {

  ofstream fr("U1rez.txt");

  fr << "Minimalus laikas" << endl;

  fr << D[maziausias_laikas].laikas << endl;

  fr << "Dienos" << endl;

  for (int i = 0; i < d; i++)

    if (D[i].laikas == D[maziausias_laikas].laikas)
      fr << D[i].diena << " ";

  fr << endl;

  fr.close();
}