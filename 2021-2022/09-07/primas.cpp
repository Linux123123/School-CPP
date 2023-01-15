#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h;
    ifstream fd("data.txt");
    fd >> a;

    for (int i = 0; i < a; i++ ) {
        fd >> b >> c >> d >> e >> f >> g >> h;
        float vidurkis = (b + c + d + e + f + g + h) / 7;
        cout << i + 1 << " " << setw (8) << fixed << vidurkis << endl;
    }

    return 0;
}
