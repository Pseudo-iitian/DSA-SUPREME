#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    // n=   15 and k=3
    // let k =2 and n=10
    // ans = 1<<2 = 0100
    // 1010 -> n
    // 0100 -> ans OR operation
    // ----
    // 1110
    int ans = 1<<k;
    int res = ans | n;
    cout<<res;
    return 0;
}