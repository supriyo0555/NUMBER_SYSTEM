#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {

    return (year % 400 == 0 ||
           (year % 4 == 0 && year % 100 != 0));
}

int main() {

    int year;
    cin >> year;

    if(isLeapYear(year))
        cout << "Leap Year";
    else
        cout << "Not Leap Year";

    return 0;
}