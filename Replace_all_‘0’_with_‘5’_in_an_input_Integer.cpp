#include <bits/stdc++.h>
using namespace std;

int replace0With5(int n) {

    string s = to_string(n);
    int len = s.length();
    for(int i = 0; i < len; i++) {
        if(s[i] == '0')
            s[i] = '5';
    }

    return stoi(s);
}

int main() {

    int n;
    cin >> n;

    cout << replace0With5(n);

    return 0;
}