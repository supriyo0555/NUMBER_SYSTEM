#include <bits/stdc++.h>
using namespace std;

int gcdNumber(int a, int b) {

    return __gcd(a, b);
}

int lcmNumber(int a, int b) {

    return (a * b) / gcdNumber(a, b);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << lcmNumber(a, b);

    return 0;
}