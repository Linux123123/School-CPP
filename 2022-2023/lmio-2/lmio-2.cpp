#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int pradziaMin = 6 * 60 + 30;
    const int pabaigaMin = 22 * 60 + 30;

    int n, hPr, mPr, hPab, mPab,
        mSkaite = 0, pasDarbPab;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> hPr >> mPr >> hPab >> mPab;

        mPr += hPr * 60;
        mPab += hPab * 60;

        if (i == 0) {
            mSkaite += mPr - pradziaMin;
            pasDarbPab = mPab;
        } else {
            mSkaite += mPr - pasDarbPab;
            pasDarbPab = mPab;
        }
        if (i + 1 == n) {
            mSkaite += pabaigaMin - mPab;
        }
    }

    cout << mSkaite;

    return 0;
}
