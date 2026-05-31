#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n) {
    if (n < 0) {
        return false;
    }

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
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}