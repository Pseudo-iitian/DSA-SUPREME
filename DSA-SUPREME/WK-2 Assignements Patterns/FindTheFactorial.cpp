#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
    int res = 1;
    for(int i=1;i<=n;++i){
        res=res*i;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial of "<<n<<" is : "<<factorial(n);
    return 0;
}