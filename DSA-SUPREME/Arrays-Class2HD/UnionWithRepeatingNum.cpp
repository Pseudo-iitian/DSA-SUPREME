#include<bits/stdc++.h>
using namespace std;
int main(){
    // union of two sets with repeating values

    vector<int> a{1,2,4,6,8,10};
    vector<int> b{3,4,5,6,9};

    vector<int> ans;
    for(int i=0;i<a.size();++i){
        for(int j=0;j<b.size();++j){
            if(a[i]==b[j]){
                b[j]=INT_MIN;
            }
        }
        ans.push_back(a[i]);
    }
    for(int i=0;i<b.size();++i){
        if(b[i]!=INT_MIN){
            ans.push_back(b[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for(auto &val: ans){
        cout<<val<<" ";
    }
    return 0;
}