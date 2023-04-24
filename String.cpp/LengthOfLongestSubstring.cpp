#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int i=0,j=0;
    set<int> st;
    int mx = 0;
    int n = s.size();
    while(i<n){
        auto it = st.find(s[i]);
        if(it==st.end()){
            st.insert(s[i]);
            i++;
        }
        else{
            mx = max(mx,i-j);
            st.clear();
            j=i;
        }
    }
    return mx;
}

int main(){
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);    
    return 0;
}