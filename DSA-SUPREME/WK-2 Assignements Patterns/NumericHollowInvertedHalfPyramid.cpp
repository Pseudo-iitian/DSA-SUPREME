#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=i;j<=n;++j){
            // cout<<j<<" ";
            if(i==1 || j==i || j==n) cout<<j<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}