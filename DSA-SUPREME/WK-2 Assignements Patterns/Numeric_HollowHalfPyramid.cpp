#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        // if(i!=n){
            for(int j=1;j<=i;++j){
                // if(i==j) cout<<j<<" ";
                // if(j==1 && i!=1) cout<<j<<" ";
                if(j==1 || i==j || i==n){
                    cout<<j<<" ";
                }
                else cout<<"  ";
            }
        // }
        // else{
        //     for(int j=1;j<=n;++j){
        //         cout<<j<<" ";
        //     }
        // }
        cout<<"\n";
    }
    return 0;
}