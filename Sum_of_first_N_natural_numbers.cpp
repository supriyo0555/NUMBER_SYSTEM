#include <bits/stdc++.h>
using namespace std;

int sumNatural(int n) {

    return n * (n + 1) / 2;
}

int main() {

    int n;
    cin >> n;

    cout << sumNatural(n);

    return 0;
}