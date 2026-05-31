#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long nPr(int n, int r) {
    if (r > n) return 0;
    return factorial(n) / factorial(n - r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, r;
    cout << "Enter number of people (N): ";
    cin >> n;
    cout << "Enter number of seats (R): ";
    cin >> r;
    
    if (r > n) {
        cout << "Cannot seat " << r << " people in " << n << " seats (R > N)" << endl;
    } else {
        long long permutations = nPr(n, r);
        cout << "Number of ways " << n << " people can occupy " << r << " seats = " << permutations << endl;
        cout << "Formula: P(N,R) = " << n << "! / (" << n << "-" << r << ")! = " << permutations << endl;
    }
    
    return 0;
}
