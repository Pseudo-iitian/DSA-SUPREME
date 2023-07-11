#include<iostream>
#include<stack>
#include<map>
using namespace std;

// valid paranthesisi

bool validParanthesis(string &s){
    stack<char> st;
    map<char,int> mp = {{'{',-3},{'(',-2},{'[',-1},{']',1},{')',2},{'}',3}};
    for(int i=0;i<s.size();++i){
        if(mp[s[i]]<1){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                if(mp[st.top()]+mp[s[i]]==0){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else return false;
        }
    }
    if(st.empty()) return true;
    return false;
}
int main()
{
    // string s = "{([])}";
    // string s ="[(]}]";
    // string s = "}{";
    string s = "";
    // string s= "{}{}";
    if(validParanthesis(s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}