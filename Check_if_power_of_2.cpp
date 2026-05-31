#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // Check if n is a power of 2
    // A number is power of 2 if it has only one bit set
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }
    
    return 0;
}
