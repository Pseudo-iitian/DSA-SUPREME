#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        if(i<=n/2){
            for(int j=1;j<=i;++j){
                cout<<"*";
            }
            for(int j=1;j<=n-2*i;++j){
                cout<<" ";
            }
            for(int j=1;j<=i;++j){
                cout<<"*";
            }
        }
        else{
            int res = n+1-i;
            for(int j=1;j<=n+1-i;++j){
                cout<<"*";
            }
            for(int j=1;j<=n-2*res;++j){
                cout<<" ";
            }
            for(int j=1;j<=res;++j){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}