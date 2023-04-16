#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=5;++i){
        for(int j=1;j<=8-i+1;++j){
            cout<<"*";
        }
        for(int j=1;j<=i;++j){
            cout<<i;
            cout<<"*";
        }
        for(int j=1;j<=8-i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}