#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
    } else {
        cout << "Factorial of " << n << " = " << factorial(n) << endl;
    }
    
    return 0;
}
