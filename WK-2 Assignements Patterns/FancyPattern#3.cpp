#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;++i){
        if(i<=n/2+1){
            for(int j=1;j<=2*i-1;++j){
                int cond = 2*i-1;
                if(j<=cond/2+1){
                    cout<<j;
                }
                else{
                    int ans = cond + 1- j;
                    cout<<ans--;
                }
            }
        }
        else{
            for(int j=1;j<=2*(n-i+1)-1;++j){
                int cond = 2*(n-i+1)-1;
                if(j<=cond/2+1){
                    cout<<j;
                }
                else{
                    int ans = cond - (j-1);
                    cout<<ans--;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}