#include <bits/stdc++.h>

using namespace std;

class Dalyvis {
public:
    Dalyvis(int laikas) {
        startoLaikas = laikas;
    }
public:
    int startoLaikas;
    bool finishavo = false;
    int finishoLaikas;
    char identifikatorius[20];
};

int main()
{
    ifstream fr("U2.txt.");
    ofstream fo("U2rez.txt");

    int n, M, v, m, s;
    char x[21];

    fr >> n;

    fr.ignore(1);

    for (int i = 0; i < n; i++) {
        fr.read(x, 20);
        fr >> v >> m >> s;
        cout << v << " " << m << " " << s << endl;
        cout << x << endl;
        memset(x, 0, sizeof x);
    }

    fr >> M;

    fr.close();
    fo.close();
    return 0;
}
