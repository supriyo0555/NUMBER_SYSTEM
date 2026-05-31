#include <bits/stdc++.h>
using namespace std;

double sumGP(double a, double r, int n) {

    if(r == 1)
       return a * n;  //a = first term , n = number of terms , r = common ratio//

    return a * (pow(r, n) - 1) / (r - 1);
}

int main() {

    double a, r;
    int n;

    cin >> a >> r >> n;

    cout << sumGP(a, r, n);

    return 0;
}