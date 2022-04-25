/*
Sukurta: 12:33 11 04 2022

zukle
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fr("Duom.txt");
    ofstream fo("Rez.txt");
    
    int n, taskai, svoris;
    
    fr >> n;
    
    for (int i = 0; i < n; i++)
    {  
        fr >> svoris;
        if (svoris > 1000 && svoris < 2000){
            taskai += 2;
        } else if (svoris >= 2000 && svoris < 3000){
            taskai += 3;
        } else if (svoris > 3000) {
            taskai += 5;
        }
    }

    if (taskai >= 15 && taskai < 20) {
        fo << 3 << endl;
    } else if (taskai >= 20 && taskai < 25) {
        fo << 2 << endl;
    } else if (taskai >= 25) {
        fo << 1 << endl;
    }

    fr.close();
    fo.close();
    return 0;
}
