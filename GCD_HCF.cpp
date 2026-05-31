#include <bits/stdc++.h>
using namespace std;

int gcdNumber(int a, int b) {

    while(b != 0) {

        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << gcdNumber(a, b);

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int gcdNumber(int a, int b) {

    return __gcd(a, b);
}

int main() {

    int a, b;
    cin >> a >> b;

    cout << gcdNumber(a, b);

    return 0;
}
*/