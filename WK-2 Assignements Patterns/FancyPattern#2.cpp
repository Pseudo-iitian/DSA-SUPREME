#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // n=4;
    int val=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=2*i-1;++j){
            if(j%2==0){
                cout<<"*";
            }
            else{
                cout<<val++;
            }
        }
        cout<<"\n";
    }
    // cout<<val;
    for(int i=1;i<=n;++i){
        val = val - (1+n-i);
        int res = val;
        for(int j=1;j<=2*(1+n-i)-1;++j){
            if(j%2==0) cout<<"*";
            else cout<<res++;
        }
        cout<<"\n";
    }
    return 0;
}