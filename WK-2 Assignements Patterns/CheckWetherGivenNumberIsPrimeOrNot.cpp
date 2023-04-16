#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(checkPrime(n)) cout<<"Yes it is prime number";
    else cout<<"No it is not a prime number";
    return 0;
}