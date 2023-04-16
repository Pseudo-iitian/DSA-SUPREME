#include<bits/stdc++.h>
using namespace std;
#define int long long

int fact(int n);
int nCr(int n,int r){
    if(r==0) return 1;
    return fact(n)/(fact(n-r)*fact(r));
}
int fact(int n){
    if(n==1) return 1;
    int res = 1;
    for(int i=2;i<=n;++i){
        res = res*i;
    }
    return res;
}
signed main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;++i){
        for(int j=0;j<=i;++j){
            cout<<(nCr(i,j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}