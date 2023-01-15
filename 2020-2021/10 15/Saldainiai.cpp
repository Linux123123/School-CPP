// Saldainiai

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;

void consoleOutNL(const string &in)
{
    cout << in << endl;
}

void consoleOut(const string &in)
{
    cout << in;
}

string consoleInStr()
{
    string out;
    getline(cin, out);
    cout << endl;
    return out;
}

int consoleInInt()
{
    int out;
    cin >> out;
    cout << endl;
    return out;
}

int main()
{
    int d, s;
    consoleOut("Irasykite devintoku skaiciu: ");
    d = consoleInInt();
    consoleOut("Irasykite saldainiu skaiciu: ");
    s = consoleInInt();
    consoleOut("Kiekvienas mokinys gavo: ");
    cout << s / d << endl;
    consoleOut("Mokytojos gavo: ");
    cout << s % d << endl;
    return 0;
}
