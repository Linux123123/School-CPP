#include <bits/stdc++.h>

using namespace std;

int rastiSpalva(vector<int> kubeliai, int indexas, int spalvu) {
    for (int i = 1; i <= spalvu; i++) {
        if (i != kubeliai[indexas - 1] && i != kubeliai[indexas + 1]) {
            return i;
        }
    }
    return -1;
}

int main()
{
    ifstream fr("U1.txt");

    int n, k, x;
    vector<int> kubeliai;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        kubeliai.push_back(x);
    }

    for (int i = 0; i < kubeliai.size(); i++) {
        if (kubeliai[i] == 0) {
            kubeliai[i] = rastiSpalva(kubeliai, i, k);

            if (kubeliai[i] == -1) {
                cout << -1;
                return 0;
            }
        }
    }

    for (int i = 0; i < kubeliai.size(); i++) {
        cout << kubeliai[i];
        if (i != kubeliai.size() - 1) cout << " ";
    }

    return 0;
}
