#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int sz = sizeof(arr);
    cout<<sz<<endl;

    int brr[][4] = {{1,2,3,4},{2,3,4,4},{1,2,3,4}};
    int z = sizeof(brr[0]);
    cout<<z<<endl;

    int row = sizeof(brr)/sizeof(brr[0]);
    int col = sizeof(brr)/sizeof(brr[0]);
    int n = row*col;
    cout<<n;
    return 0;
}