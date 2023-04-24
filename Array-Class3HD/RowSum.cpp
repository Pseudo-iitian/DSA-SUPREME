#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int> > arr;
    int n = 5;
    for(int i=0;i<n;++i){
        vector<int> temp;
        for(int j=0;j<4;++j){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        arr.push_back(temp);
    }
    int sum =0;
    for(int i=0;i<arr.size();++i){
        sum=0;
        for(int j=0;j<arr[i].size();++j){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    return 0;
}