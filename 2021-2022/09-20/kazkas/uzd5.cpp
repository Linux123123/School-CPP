#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ifstream fd("data.txt");
    ofstream fo("out.txt");
    int g, b;
    int bal [3] = {0, 0, 0};
    int grybai [3] = {0, 0, 0};
    int baravykai [3] = {0, 0, 0};
    int didziausias;
    bool daugiausiaBalu [3] = { false, false, false };
    for (int i = 0; i < 3; i++) {
        for (int x = 0; x < 3; x++) {
            fd >> g;
            fd >> b;
            bal[i] += b;
            if (x == 0) baravykai[i] = g;
            grybai[i] += g;
        }
    }
    didziausias = *max_element(bal, bal + 3);
    for (int i = 0; i < 3; i++) {
        if (bal[i] == didziausias)
        {
            daugiausiaBalu[i] = true
        }
    }
    return 0;
}
