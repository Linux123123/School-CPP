Data types:

    char letter = 'a';
    float decimal_number = 2.25;
    int number = 5;
    double long_number = 2.2546346;
    string hello = "Hello world.";
    bool isMale= true;

Strings:

    cout << "Hello" << endl; // same as
    cout << "Hello\n" // same as

    string hello = "Hello world.";
    cout << hello.length() << endl; // output 12
    cout << hello[0] << endl; // output H

    hello[1] = 'a';
    cout << hello << endl; // output Hallo world.
    cout << hello.find("Hello", 0) << endl; // output 0
    cout << hello.substr(6, 3) << endl; // output wor

Numbers:

    int number = 1;
    number++
    cout << number << endl; // output 2

    // Including this from this point
    #include <cmath>

    cout << pow(2, 8) << endl; // output 256
    cout << sqrt(4) << endl; // output 2
    cout << round(4.50) << endl; // output 5
    cout << ceil(4.1) << endl; // output 5
    cout << floor(4.99) << endl; // output 4
    cout << fmax(10, 7) << endl; // output 10
    cout << fmin(10, 7) << endl; // output 7

Input:

    double input;
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // linux
    cout << "Enter a number to add 1 to: ";
    cin >> input; // 5
    input++;
    cout << "Hi " << name << " your number is: " << input << endl; // output Hi linux your number is: 6
    return 0;

Basic calculator:

    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 + num2 << endl;

    return 0;

Lists:

    int luckyNums[] = {4, 8, 6, 4, 1};
    cout << luckyNums[1];

Functions:

    void consoleout(string word){
       cout << word << endl;
    }

    int main()
    {
        consoleout("Hello"); // output Hello
        return 0;
    }

Realieji:

    "text" << setw (8) << fixed << setprecision(2) << variable << endl;
