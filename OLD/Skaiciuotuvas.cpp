#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

string oper;

float getInputFloat()
{
    float out;
    cin >> out;
    return out;
}

void consoleOut(const string &sentence)
{
    cout << sentence << endl;
}

string getString(string klausimas)
{
    consoleOut(klausimas);
    string out;
    cin >> out;
    return out;
}

bool arTesti(string klausimas)
{
    consoleOut(klausimas);
    string in;
    cin >> in;
    if (in == "y" || in == "Y")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void skaiciavimas()
{
    consoleOut("Parasykite pirmaji numeri: ");
    float num1 = getInputFloat();

    bool operBad = true;
    vector<string> validOper = {"+", "-", "*", "/", "%", "^"};
    while (operBad)
    {
        oper = getString("Parasykite operatoriu(+,-,/,*, %, ^): ");
        for (size_t f = 0; f < validOper.size(); f++)
        {
            if (oper == validOper.at(f))
            {
                operBad = false;
                break;
            }
            else
            {
                operBad = true;
                continue;
            }
        }
    }

    consoleOut("Parasykite antraji numeri: ");
    float num2 = getInputFloat();

    float output;

    if (oper == "+")
    {
        output = num1 + num2;
    }
    else if (oper == "-")
    {
        output = num1 - num2;
    }
    else if (oper == "/")
    {
        output = num1 / num2;
    }
    else if (oper == "*")
    {
        output = num1 * num2;
    }
    else if (oper == "%")
    {
        int inum1 = static_cast<int>(num1);
        int inum2 = static_cast<int>(num2);
        output = inum1 % inum2;
    }
    else if (oper == "^")
    {
        output = pow(num1, num2);
    }

    cout << "Rezultatas yra: " << output << endl;
}

int main()
{
    bool veikia;
    do
    {
        skaiciavimas();
    } while (arTesti("Ar norite skaiciuoti dar karta? [Y/y]: "));

    return 0;
}