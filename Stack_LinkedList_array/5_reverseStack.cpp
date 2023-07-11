#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int> &st,int target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();

    // recursive call
    insertAtBottom(st,target);

    // backtracking
    st.push(temp);
}

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void reverse(stack<int> &st){

    if(st.empty()) return;
    int top = st.top();
    st.pop();

    // recursive call
    reverse(st);
    // backtrack
    insertAtBottom(st,top); 

}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // reverse stack before
    print(st);

    // after reversal of stack
    reverse(st);

    cout<<endl;

    print(st);
    return 0;

}