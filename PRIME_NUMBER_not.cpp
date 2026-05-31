#include<bits/stdc++.h>
using namespace std;
bool prime_number(int n){
    if(n<=1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(prime_number(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}