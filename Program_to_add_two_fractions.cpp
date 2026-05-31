#include <bits/stdc++.h>
using namespace std;

void addFractions(int a, int b, int c, int d) {

    int numerator = a * d + b * c;
    int denominator = b * d;

    int g = __gcd(numerator, denominator);

    cout << numerator / g << "/"
         << denominator / g;
}

int main() {

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    addFractions(a, b, c, d);

    return 0;
}