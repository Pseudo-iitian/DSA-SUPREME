#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

    
vector<int> countSmaller(vector<int>& nums) {
    stack<int> st;
    vector<int> res(nums.size());
    int mn = INT_MIN;
    st.push(mn);
    stack<int> smaller;

    vector<int> ans(nums.size(),0);

    for(int i=nums.size()-1;i>=0;--i){
        int curr = nums[i];
        while(st.top()>=curr){
        	int top = st.top();
            st.pop();
            smaller.push(top);
        }
        // res[i]=st.top();
        if(st.top()==mn) res[i]=0;
        else res[i]= st.size() - 1;
        st.push(curr);
        while(!smaller.empty()){
  	      	int top = smaller.top();
        	st.push(top);
        	smaller.pop();
        }
    }
    return res;
}


int main(){
    vector<int> arr = {0,2,1};
    vector<int> res = countSmaller(arr);
    for(auto &val: res){
    	cout<<val<<" ";
    }
    return 0;	
}