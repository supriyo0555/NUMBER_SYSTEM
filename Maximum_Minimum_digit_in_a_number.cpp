#include <bits/stdc++.h>
using namespace std;

void maxMinDigit(int n) {

    int mx = 0;
    int mn = 9;

    while(n > 0) {

        int digit = n % 10;

        mx = max(mx, digit);
        mn = min(mn, digit);

        n /= 10;
    }

    cout << "Maximum = " << mx << endl;
    cout << "Minimum = " << mn;
}

int main() {

    int n;
    cin >> n;

    maxMinDigit(n);

    return 0;
}