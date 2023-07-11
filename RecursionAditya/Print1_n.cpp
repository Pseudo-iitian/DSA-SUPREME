#include<iostream>
using namespace std;


// print n to 1
void print(int n){
    if(n<=0) return ;
    cout<<n<<" ";
    print(n-1);
}

// print 1 to n
void Print(int n,int i){
    if(n<i) return ;
    cout<<i<<" ";
    Print(n,i+1);
}

void print1(int n){
    if(n==0) return ;
    print1(n-1);
    cout<<n<<" ";
}
int main(){
    // print 1 to n
    int n = 10;
    // print(n);
    // Print(10,5);
    print1(n);
    return 0;
}