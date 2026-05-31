#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {

    int temp = n;
    int sum = 0;
    string s=to_string(n);
    int digits = s.size();

    while(temp > 0) {

        int digit = temp % 10;

        sum +=round(pow(digit, digits));

        temp /= 10;
    }

    return sum == n;
}

int main() {

    int n;
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}