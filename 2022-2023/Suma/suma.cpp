#include <iostream>

using namespace std;

int main()
{
    int x, y, suma = 0;

    cin >> x >> y;

    x++;

    for (int i = x; i < y; i++) {
        suma += i;
    }

    cout << suma;

    return 0;
}
