#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string oper;

float getInputFloat()
{
    float out;
    cin >> out;
    return out;
}

void consoleOut(string sentence)
{
    cout << sentence << endl;
}

string getOperator()
{
    consoleOut("Parasykite operatoriu(+,-,/,*, %): ");
    string out;
    cin >> out;
    return out;
}

int main()
{
    consoleOut("Parasykite pirmaji numeri: ");
    float num1 = getInputFloat();

    bool operBad = true;
    vector<string> validOper = {"+", "-", "*", "/", "%"};
    while (operBad)
    {
        oper = getOperator();
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

    cout << "Rezultatas yra: " << output << endl;

    return 0;
}