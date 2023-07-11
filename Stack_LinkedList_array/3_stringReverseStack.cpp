#include<iostream>
using namespace std;


class Stack{
    public:
        char* arr;
        int size;
        int top;
        Stack(int size){
            arr = new char[size];
            this->size = size;
            this->top = -1;
        }
        void push(char data){
            if(size-top>1){
                // available space
                top++;
                arr[top]=data;
            }
            else{
                cout<<"OVERFLOW"<<endl;
            }
        }
        void pop(){
            if(top==-1){
                cout<<"UNDERFLOW"<<endl;
            }
            else{
                cout<<arr[top]<<" ";
                top--;
            }
        }
};


int main()
{
    string s = "Abhishek";
    Stack st(s.size());
    for(int i=0;i<s.size();++i){
        st.push(s[i]);
    }
    for(int i=0;i<s.size();++i){
        st.pop();
    }
    
    return 0;
}