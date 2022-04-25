/*
Sukurta: 12:21 11 04 2022

svetaine
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("Svetaine.txt");
    ofstream fo("SvetaineRez.txt");
    
    int n;
    float p, l;
    vector<float> dienosPop;
    bool arDaug = true;
    
    fr >> n;
    
    for (int i = 0; i < n; i++)
    {
        fr >> p >> l;
        dienosPop.push_back(p / l);
    }

    for (int i = 1; i < dienosPop.size(); i++) {
        if (dienosPop[i] < dienosPop[i - 1]) {
            fo << i + 1 << endl;
            arDaug = false;
            break;
        } else {
            arDaug = true;
        }
    }

    if (arDaug) fo << "NE" << endl;
    
    
    fr.close();
    fo.close();
    return 0;
}
