#include <bits/stdc++.h>
using namespace std;

int greatestThree(int a, int b, int c) {

    return max(a, max(b, c));
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    cout << greatestThree(a, b, c);

    return 0;
}