#include<bits/stdc++.h>
using namespace std;

bool checkOdd(int &n){
    if(n&1) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if(checkOdd(n)){
        cout<<n<<" is odd number";
    }
    else cout<<n<<" is even number";
    return 0;
}