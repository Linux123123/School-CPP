/*
Sukurta: 12:51 11 04 2022

test
*/

#include <bits/stdc++.h>
using namespace std;

void DidMaz(int a, int b, int c, int &mn, int &mx) {
    mn = min(a, min(b, c));
    mx = max(a, max(b, c));
}

int main()
{
    ifstream fr("duom.txt");
    ofstream fo("rez.txt");
    
    int n, p, a, t, mx, mn;
    
    fr >> n;
    
    for (int i = 0; i < n; i++)
    {
        fr >> p >> a >> t;       
        DidMaz(p, a, t, mn, mx);
        fo << mn << " " << mx << endl;
    }
    
    
    fr.close();
    fo.close();
    return 0;
}
