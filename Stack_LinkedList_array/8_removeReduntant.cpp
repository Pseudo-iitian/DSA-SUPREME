#include<iostream>
#include<stack>
using namespace std;


bool checkRedundancy(string s){
    stack<char> st;
    bool redundant = false;
    // true means redunatan hai
    // false means not redundant
    for(int i=0;i<s.size();++i){
        if(s[i]=='(') st.push(s[i]);
        if(s[i]=='+' || s[i]=='*' || s[i]=='/' || s[i]=='-'){
            st.push(s[i]);
        }
        char top = st.top();
        if(s[i]==')'){
            if(st.top()=='(') redundant = true;
            while(st.top()=='+' || st.top()=='/' || st.top()=='*' || st.top()=='-'){
                st.pop();
            }
            st.pop();
        }
    }
    return redundant;
}
int main(){
    // string s = "((a+b))";
    // string s = "(a+b)+d";
    string s = "(a+b+(c+d))";
    cout<<checkRedundancy(s);
    return 0;
}