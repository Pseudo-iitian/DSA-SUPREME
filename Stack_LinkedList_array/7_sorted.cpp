// insertSorted element in sorted order
#include<stack>
#include<iostream>
using namespace std;

void insertSorted(stack<int> &st,int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int top = st.top();
    if(st.top()>=element){
        st.push(element);
        return;
    }
    st.pop();
    insertSorted(st,element);
    st.push(top);
}
void sortedStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int top = st.top();
    st.pop();
    sortedStack(st);
    insertSorted(st,top);
}
int main()
{
    int element = 5;
    stack<int> st;
    st.push(9);
    st.push(5);
    st.push(3);
    st.push(11);
    st.push(7);
    sortedStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}