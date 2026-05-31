#include <bits/stdc++.h>
using namespace std;

int sumAP(int a, int d, int n) {
    
  int s=(n * (2 * a + (n - 1) * d)) / 2;
  return s;
}

int main() {

    int a, d, n;
    cin >> a >> d >> n;

    cout << sumAP(a, d, n);

    return 0;
}