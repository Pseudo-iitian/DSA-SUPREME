#include<bits/stdc++.h>
using namespace std;

int reverseInt(int n){
    int res = 0;
    while(n!=0){
        int r = n%10;
        res = res*10+r;
        n=n/10;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<reverseInt(n);
    return 0;
}