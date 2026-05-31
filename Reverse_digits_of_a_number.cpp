#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {

    int rev = 0;

    while(n > 0) {
        int digit=n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}

int main() {

    int n;
    cin >> n;

    cout << reverseNumber(n);

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {

    string s=to_string(n);
    int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return stoi(s);

}

int main() {

    int n;
    cin >> n;

    cout << reverseNumber(n);

    return 0;
}
*/ 