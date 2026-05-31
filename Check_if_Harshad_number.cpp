#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int digitSum = sumOfDigits(n);
    
    if (n % digitSum == 0) {
        cout << n << " is a Harshad number" << endl;
        cout << n << " is divisible by sum of its digits (" << digitSum << ")" << endl;
    } else {
        cout << n << " is not a Harshad number" << endl;
    }
    
    return 0;
}
