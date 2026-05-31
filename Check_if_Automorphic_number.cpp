#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Automorphic number: last digits of square are same as original number
    long long square = (long long)n * n;
    int temp = n;
    int digits = 0;
    
    // Count digits in n
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Extract last 'digits' digits from square
    int remainder = square % (int)pow(10, digits);
    
    if (remainder == n) {
        cout << n << " is an Automorphic number" << endl;
    } else {
        cout << n << " is not an Automorphic number" << endl;
    }
    
    return 0;
}
