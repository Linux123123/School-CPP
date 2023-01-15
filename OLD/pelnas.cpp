/*
Sukurta: 23:52 13 11 2021

pelnas
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pelnas = 0;
    int pelnasPrid = 2;
    int kaina = 800;
    int vaizdo = 1;
    for (int i = 0; i < 800; i++)
    {
        pelnas += pelnasPrid;
        if (pelnas > kaina){
            pelnas -= kaina;
            vaizdo++;
            pelnasPrid += 2;
        }
    }

    cout << "Pelnas per diena " << pelnasPrid << endl;
    cout << "Pelnas " << pelnas << endl;
    cout << "Vaizdo " << vaizdo << endl;
    
    return 0;
}
