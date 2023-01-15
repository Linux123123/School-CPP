#include <bits/stdc++.h>

using namespace std;

class Stotele {
public:
    string pavadinimas;
    vector<int> marsrutai;
};

class Marsrutas {
public:
    Marsrutas(int x) {
        nr = x;
    }
public:
    int nr;
    int stoteliu = 0;
};

int main()
{
    ifstream fr("U2.txt");
    ofstream fo("U2rez.txt");

    int n, t, x;
    char pav[21];
    vector<Stotele> stoteles;
    vector<Marsrutas> marsrutai;
    vector<string> pavadinimai;

    fr >> n;

    fr.ignore();
    for (int i = 0; i < n; i++) {
        fr.get(pav, sizeof(pav));
        fr >> ws;

        Stotele stotele;
        stotele.pavadinimas = pav;

        fr >> t;
        for (int j = 0; j < t; j++) {
            fr >> x;
            stotele.marsrutai.push_back(x);
            Marsrutas marsrutas(x);
            marsrutai.push_back(marsrutas);
        }
        fr.ignore(256, '\n');
        stoteles.push_back(stotele);
    }

    sort(marsrutai.begin(), marsrutai.end(), [](auto a, auto b) {
         return a.nr < b.nr;
    });
    marsrutai.erase( unique( marsrutai.begin(), marsrutai.end(), [](auto a, auto b) {
        return a.nr == b.nr;
    } ), marsrutai.end() );

    for (Marsrutas &m : marsrutai) {
        for (Stotele s : stoteles) {
            if (count(s.marsrutai.begin(), s.marsrutai.end(), m.nr)) {
                m.stoteliu++;
            }
        }
    }

    sort(marsrutai.begin(), marsrutai.end(), [](auto a, auto b) {
         return a.stoteliu > b.stoteliu;
    });

    int daugStot = marsrutai[0].stoteliu;

    vector<Marsrutas> daugMars;

    for (Marsrutas m : marsrutai) {
        if (m.stoteliu == daugStot) daugMars.push_back(m);
    }

    sort(daugMars.begin(), daugMars.end(), [](auto a, auto b) {
         return a.nr < b.nr;
    });

    Marsrutas daug = daugMars[0];

    fo << daug.nr << endl;

    for (Stotele s : stoteles) {
        if (count(s.marsrutai.begin(), s.marsrutai.end(), daug.nr)) {
            pavadinimai.push_back(s.pavadinimas);
        }
    }

    for (string pav : pavadinimai) {
        fo << pav;
        if (pav != pavadinimai[pavadinimai.size()-1]) fo << endl;
    }

    fo.close();
    fr.close();
    return 0;
}
