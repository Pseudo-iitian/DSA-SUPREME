#include<iostream>
#include<stack>
#include<vector>
using namespace std;


void print(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    // creation
    stack<int> st;
    // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.emplace(50);

    // st.pop();
    // cout<<"the value at the top of the stack is:"<<st.top()<<endl;
    // cout<<"the size of the stack is: "<<st.size()<<endl;

    // if(st.empty()) cout<<"the stack is empty"<<endl;
    // else cout<<"stack is not empty"<<endl;

    // vector<int> v{1,2,3,4},v1{4,3,2,1};
    // stack st1{move(v)};
    // stack st2{move(v1)};

    // st1.swap(st2);
    return 0;
}