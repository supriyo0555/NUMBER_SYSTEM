#include <bits/stdc++.h>
using namespace std;

void checkNumber(int n) {

    if(n > 0)
        cout << "Positive";

    else if(n < 0)
        cout << "Negative";

    else
        cout << "Zero";
}

int main() {

    int n;
    cin >> n;

    checkNumber(n);

    return 0;
}