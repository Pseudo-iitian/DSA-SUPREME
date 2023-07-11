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

void getTarget(stack<int> &st){
    if(st.empty()){
        cout<<"Size is already empty, you can't perform any task now";
        return;
    }
    // remove top element here
    int target = st.top();  
    st.pop();

    insertAtBottom(st,target);

}
void print(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack<int> st;
    int target = 10;
    st.push(11);    
    st.push(12);    
    st.push(13);    
    st.push(14);    
    st.push(15);
    // print(st);
    insertAtBottom(st,target);
    cout<<endl;
    print(st);
    cout<<endl;
    return 0;
}