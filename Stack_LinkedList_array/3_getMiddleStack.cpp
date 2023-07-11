#include<iostream>
#include<stack>
using namespace std;

void getMiddle(stack<int> &st,int size){
    if(st.size()==0){
        cout<<"stack is empty"<<endl;
        return;
    }
    if(st.size() == (size+1)/2){
        cout<<"Middle element is: "<<st.top()<<endl;
        return;
    }
    int temp = st.top();
    st.pop();

    // recursive call
    getMiddle(st,size);

    // backtrack
    st.push(temp);
}
int main()
{
    stack<int> st;    
    st.push(20);
    st.push(30);
    st.push(10);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    int n = st.size();
    getMiddle(st,n);    
    return 0;
}