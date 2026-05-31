#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int n) {
    if (n < 0) return false;

    string str = to_string(n);
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int start, end;
    
    cout << "Enter start and end value: ";
    cin >> start >> end;

    cout << "Palindrome numbers between " << start << " and " << end << " are:" << endl;
        for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            cout << i << " "; 
        }
    }
    cout << endl;

    return 0;
}