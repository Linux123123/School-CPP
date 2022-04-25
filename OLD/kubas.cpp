/*
Sukurta: 10:31 05 04 2022

test
*/

#include <bits/stdc++.h>
using namespace std;

float kubas(float x) {
    return x * x * x;
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");
    
    int n;
    float x;
    
    fr >> n;
    
    for (int i = 0; i < n; i++)
    {
        fr >> x;
        fo << setprecision(2) << fixed << x
           << " " << setprecision(2) << fixed 
           << kubas(x) << endl;        
    }
    
    fr.close();
    fo.close();
}
