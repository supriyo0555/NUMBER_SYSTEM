#include <bits/stdc++.h>
using namespace std;

long long power(long long base, int exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long base;
    int exponent;
    
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    
    return 0;
}
