// Dvizenklio skaiciaus skaitmenu suma

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

string consoleIn()
{
    string out;
    getline(cin, out);
    return out;
}

int main()
{
    int mokiniai;
    consoleOut("Irasykite mokiniu skaiciu: ");
    cin >> mokiniai;
    cout << endl;
    consoleOut("Dvizenklio skaiciaus skaitmenu suma: ");
    cout << (mokiniai / 10) + (mokiniai % 10) << endl;
    return 0;
}
