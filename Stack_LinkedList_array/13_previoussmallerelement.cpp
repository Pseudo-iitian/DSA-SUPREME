#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);
    stack<int> st;
    vector<int> ans;
    st.push(-1);
    for(int i=0;i<arr.size();++i){
        int curr = arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans.push_back(st.top());
        st.push(curr);
    }

    for(int i=0;i<ans.size();++i){
        cout<<ans[i]<<" "; 
    }
    return 0;
}