#include <bits/stdc++.h>

using namespace std;

class Garazas
{
public:
    Garazas(int vietu, int masinu)
    {
        garazoVietu = vietu;
        busMasinu = masinu;
        for (int i = 0; i < vietu; i++)
        {
            garazoVietos.push_back(0);
        }
    }

    void ileistiMasinas()
    {
        if (eile.size() == 0) return;
        for (int i = 0; i < garazoVietu; i++)
        {
            if (eile.size() != 0 && garazoVietos[i] == 0) {
                garazoVietos[i] = eile[0];
                pridetiKaina(eile[0], i);
                eile.erase(eile.begin());
            }
        }

    }

    void atvaziavoMasina(int masinosNum)
    {
        eile.push_back(masinosNum);
        ileistiMasinas();
    }

    void isvaziavoMasina(int masinosNum)
    {
        for (int i = 0; i < garazoVietu; i++)
        {
            if (garazoVietos[i] == masinosNum) {
                garazoVietos[i] = 0;
            }
        }

        ileistiMasinas();
    }

    void pridetiKaina(int masinosNum, int garazoVieta) {
        pinigu += garazuVietuKainos[garazoVieta ] * masinuSvoriai[masinosNum - 1];
    }

    public:
    int garazoVietu;
    int busMasinu;
    int pinigu = 0;
    vector<int> eile;
    vector<int> garazoVietos;
    vector<int> garazuVietuKainos;
    vector<int> masinuSvoriai;
};

int main()
{
    int garazeVietu, masinu, x;

    cin >> garazeVietu >> masinu;

    Garazas garazas(garazeVietu, masinu);

    for (int i = 0; i < garazeVietu; i++)
    {
        cin >> x;
        garazas.garazuVietuKainos.push_back(x);
    }

    for (int i = 0; i < masinu; i++)
    {
        cin >> x;
        garazas.masinuSvoriai.push_back(x);
    }

    int eilesNr = masinu * 2;

    for (int i = 0;  i < eilesNr; i++) {
        cin >> x;
        if (x < 0) {
            garazas.isvaziavoMasina(abs(x));
        } else {
            garazas.atvaziavoMasina(x);
        }
    }

    cout << garazas.pinigu;

    return 0;
}

