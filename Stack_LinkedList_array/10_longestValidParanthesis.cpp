#include<iostream>
#include<stack>
using namespace std;

int longestValidParentheses(string s) {
    stack<int> st;
    st.push(-1);
    int mxLen = 0;
    for(int i=0;i<s.size();++i){
        char ch = s[i];
        if(ch == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                int len = i - st.top();
                mxLen = max(mxLen,len);
            }
        }
    }
    return mxLen;
}
int main(){
    // string s= ")()())";
    string s = "(()))())(";
    // string s = "())()";
    cout<<longestValidParentheses(s)<<endl;
    return 0;
}