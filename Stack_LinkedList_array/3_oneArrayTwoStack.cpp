#include<iostream>
using namespace std;

// one array me two stacks hai unko use kerna hai0
class Stack{
    public: 
        int size;
        int* arr;
        int top1;
        int top2;
        Stack(int n){
            arr = new int[n];
            this->size = n;
            this->top1 = -1;
            this->top2 = n;
        }
        void push1(int data){
            if(top2-top1 == 1){
                // space not available
                cout<<"OVERFLOW"<<endl;
            }
            else{
                top1++;
                arr[top1]=data; 
            }
        }
        void pop1(){
            if(top1==-1){
                // underflow condition
                cout<<"UNDERFLOW"<<endl;
            }
            else{
                arr[top1]=0;
                top1--;
            }
        }
        void push2(int data){
            if(top2-top1 == 1){
                // space not available
                cout<<"OVERFLOW"<<endl;
            }
            else{
                top2--;
                arr[top2]=data; 
            }
        }
        void pop2(){
            if(top2==size){
                // underflow condition
                cout<<"UNDERFLOW"<<endl;
            }
            else{
                arr[top2]=0;
                top2++;
            }
        }
        void print(){
            cout<<"top1: "<<top1<<endl;
            cout<<"top2: "<<top2<<endl;
            for(int i=0;i<size;++i){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    Stack st(10);
    st.push1(2);
    st.print();
    st.push1(4);
    st.print();
    st.push1(5);
    st.print();
    st.push1(6);
    st.print();
    st.push1(7);
    st.print();
    st.push1(8);
    st.print();
    st.push1(9);
    st.print();
    st.push2(2);
    st.print();
    st.push2(1);
    st.print();
    st.push2(4);
    // st.push2(2);
    st.print();
    st.push1(5);
    st.pop1();
    st.print();
    st.pop2();
    st.print();
    return 0;
}