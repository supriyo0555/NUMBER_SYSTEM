#include <bits/stdc++.h>
using namespace std;

int greatest(int a, int b) {

    return max(a, b);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << greatest(a, b);

    return 0;
}