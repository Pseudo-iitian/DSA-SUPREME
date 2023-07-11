#include<iostream>
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

vector<int> prevSmaller(vector<int> &heights){
    stack<int> st;
    vector<int> res(heights.size());
    for(int i=0;i<heights.size();++i){
        int curr = heights[i];
        while(curr<=st.top()){
            st.pop();
        }
        res[i]=st.top();
        st.push(i);
    }
}

int nextSmaller(vector<int> &heights){
    return 1;
}
int largestRectangleArea(vector<int>& heights) {
    vector<int> prev = prevSmaller(heights);
    for(auto &val: prev){
        cout<<val<<" ";
    }
    return 1;
}

int main(){
    vector<int> heights{2,1,5,6,2,3};
    largestRectangleArea(heights);
    return 0;
}