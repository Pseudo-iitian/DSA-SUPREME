#include<iostream>
#include<stack>
using namespace std;

int main(){
    // next smaller element
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(4);
    st.push(3);
    stack<int> ans;
    int mn = -1;    
    while(!st.empty()){
        int top = st.top();
        
        mn = min(top,mn);
        if(mn == top) ans.push(-1);
        else ans.push(mn);
        mn = top;
        st.pop();
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();  
    }
    return 0;
}