#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans{0,1,1,0,1,0,1,0,0};
    int n = ans.size();
    // cout<<n;
    int i=0,j=n-1;
    while(i<j){
        if(ans[i]==ans[j]) i++;
        else if(ans[i]==0 && ans[j]==1) j--;
        else{
            swap(ans[i],ans[j]);
            i++;
            j--;
        }
    }

    for(auto &val: ans){
        cout<<val<<" ";
    }
    return 0;

}