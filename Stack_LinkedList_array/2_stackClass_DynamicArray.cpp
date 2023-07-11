#include<iostream>
using namespace std;


class Stack{
    public:

    int *arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        // if(top>=size) then full hai
        if(size-top>1){
            // available
            top++;
            arr[top]=data;
        }
        else{
            // space are not available
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top == -1){
            // stack underflow
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top = top - 1;
        }
    }

    int getTop(){
        if(top == -1){
            cout<<"There is no element at top "<<endl;
        }
        return arr[top];
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        if(top == -1 ) return true;
        return false;
    }

};
int main()
{
    Stack st(4);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.push(5);
    st.pop();
    while(!st.isEmpty()){
        cout<<st.getTop()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<"Size of stack: "<<st.getSize()<<endl;
    st.pop();
    return 0;
}