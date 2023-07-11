#include<iostream>
using namespace std;
#include<stack>


string removeDuplicates(string s) {
    stack<char> st;
    string ans="";
    st.push('1');
    for(int i=0;i<s.size();++i){
        if(st.top()==s[i]) st.pop();
        else st.push(s[i]);
    }  
    while(st.top()!='1'){
        ans = st.top()+ans;
        st.pop();
    }
    return ans;
}
int main(){
    string s = "abbaca";
    cout<<removeDuplicates(s);

    return 0;
}