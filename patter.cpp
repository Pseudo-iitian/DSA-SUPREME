#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space = n/2-1;
    for(int i=1;i<=n;++i){
        if(i<=n/2){
            for(int j=1;j<=space-i+1;++j){
                cout<<" ";
            }
            if(i==1){
                cout<<"*";
            }
            else{
                cout<<"/";
                for(int j=1;j<=2*(i-1)-1;++j){
                    cout<<" ";
                }
                cout<<"\\";
            }
        }
        else{
            for(int j=1;j<=i-(n/2+1);++j){
                cout<<" ";
            }
            if(i==n){
                cout<<"*";
            }
            else{
                cout<<"\\";
                // n-1
                for(int j=1;j<=2*(n-i)-1;++j){
                    cout<<" ";
                }
                cout<<"/";
            }
        }
        cout<<endl;
    }
    return 0;
}