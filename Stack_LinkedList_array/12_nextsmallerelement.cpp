#include<iostream>
#include<vector>
#include<stack> 
using namespace std;

int main(){
    vector<int> ans;
    stack<int> st;
    ans.push_back(2);
    ans.push_back(1);
    ans.push_back(4);
    ans.push_back(3);
    // 2 1 4 3
    vector<int> res(ans.size());
    st.push(-1);
    int mn;
    for(int i=ans.size()-1;i>=0;--i){
        int curr = ans[i];
        while(st.top()>=curr){
            st.pop();
        }
        res[i] = st.top();
        st.push(curr);   
    }

    // reverse(res.begin(),res.end());
    for(int i=0;i<res.size();++i){
        cout<<res[i]<<" ";
    }
    return 0;
}