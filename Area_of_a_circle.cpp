#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    
    double area = M_PI * radius * radius;
    
    cout << "Area of circle with radius " << radius << " = " << fixed << setprecision(2) << area << endl;
    
    return 0;
}
