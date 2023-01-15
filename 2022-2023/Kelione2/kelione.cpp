#include <bits/stdc++.h>

using namespace std;

struct Stotele {
    string pav;
    double atstumas;
};

double apskLaika (double atstumas, int greitis) {
    return atstumas / greitis * 60.0;
}

int main()
{
    ifstream fr("Duom2.txt");
    ofstream fo("Rez2.txt");

    int n;
    double greitis, pV, pM;
    vector<Stotele> stoteles;
    fr >> n >> greitis >> pV >> pM;

    // Isvykimo laikas minutemis
    pM += pV * 60;

    char rPav[15];
    fr.ignore();
    for (int i = 0; i < n; i++) {
        Stotele stotele;
        fr.get(rPav, sizeof(rPav));
        stotele.pav = rPav;
        fr >> ws >> stotele.atstumas;
        stoteles.push_back(stotele);
        fr.ignore();
    }

    for (Stotele stotele : stoteles) {
        int laikas = apskLaika(stotele.atstumas, greitis);
        pM += laikas;
        pV = trunc(pM / 60.0);
        cout << stotele.pav << " " << pV << " val. " << pM - pV * 60 << " min.";
        if (stotele.pav != stoteles[stoteles.size() - 1].pav) cout << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
