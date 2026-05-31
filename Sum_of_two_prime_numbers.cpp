#include <iostream>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n / 2; i++) {
        if (prime(i) && prime(n - i)) {
            cout << n << " = " << i << " + " << n - i;
            return 0;
        }
    }

    cout << "Not possible";

    return 0;
}
