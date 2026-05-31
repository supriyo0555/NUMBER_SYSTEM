#include <bits/stdc++.h>
using namespace std;

int sumOfProperDivisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int divisorSum = sumOfProperDivisors(n);
    
    if (divisorSum > n) {
        cout << n << " is an Abundant number" << endl;
        cout << "Sum of proper divisors: " << divisorSum << endl;
    } else {
        cout << n << " is not an Abundant number" << endl;
        cout << "Sum of proper divisors: " << divisorSum << endl;
    }
    
    return 0;
}
