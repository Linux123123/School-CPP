#include <bits/stdc++.h>

using namespace std;

double Masina(double litraiPerKm, double atstumas, double kainaPerLitra){
    double litrai = 0, kaina = 0;

    litrai = litraiPerKm * atstumas / 100;
    kaina = kainaPerLitra * litrai;

    return kaina;
}

void Autobusu(double &bilietas[], int marsrutai){
    for (int i = 0; i < marsrutai; i++){
        bilietai[i] = bilietai[i] * 2;
    }
}

void Skirtumas(int marsrutai, double &skirtumas[], double kaina, double bilietas[]){
    for (int i = 0; i < marsrutai; i++){
        skirtumas[i] = kaina - bilietas[i];
    }
}

int main()
{
    ifstream fd("U2.txt");
    ofstream fr("U2rez.txt");

    double litraiPerKm, atstumas, kainaPerLitra, kaina = 0;
    int marsrutai, seima;

    fd >> litraiPerKm >> atstumas >> kainaPerLitra >> seima;
    fd >> marsrutai;

    double bilietas[marsrutai], skirtumas[marsrutai];

    for (int i = 0; i < marsrutai; i++){
        fd >> bilietas[i];
    }

    kaina = Masina(litraiPerKm, atstumas, kainaPerLitra);

    Autobusu(bilietas, marsrutai);

    Skirtumas(marsrutai, skirtumas, kaina, bilietas);

    for (int i = 0; i < marsrutai; i++){
        fr << fixed << setw(4) << setprecision(2) << skirtumas[i] << endl;
    }

    fd.close();
    fr.close();
    return 0;
}
