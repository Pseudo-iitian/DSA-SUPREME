#include<bits/stdc++.h>
using namespace std;


// print all prime numbers from 1 to n
void printPirme(int n){
    for(int i=2;i<=n;++i){
        int flag=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag) cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    printPirme(n);
    return 0;
}