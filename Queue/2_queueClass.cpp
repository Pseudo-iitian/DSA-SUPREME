#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

class Queue{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        Queue(int size){
            this->size=size;
            arr = new int[size];
            front = 0;
            rear = 0;
        }
        void push(int element){
            if(rear == front && (rear!=0 && front!=0)){
                cout<<"queue is full"<<endl;
            }
            else{
                arr[rear]=element;
                rear++;
            }
        }
        void pop(){
            if(rear==front) cout<<"queue is empty"<<endl;
            else{
                arr[front]=0;
                front++;
                if(front==rear){
                    front=0;
                    rear=0;
                }
            }
        }
        bool isEmpty(){
            if(front==rear) return true;
            return false;
        }
        int getSize(){
            return rear - front;
        }
        int get_front(){
            // khali to nhi, nhi to kya return krunga
            if(isEmpty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            else return arr[front];
        }
};
int main(){
    Queue abhi(5);
    abhi.push(4);
    abhi.push(3);
    abhi.push(1);
    abhi.push(2);
    cout<<"front element is before pop operation: "<<abhi.get_front()<<endl;
    abhi.pop();
    cout<<"front element is after pop operation: "<<abhi.get_front()<<endl;
    cout<<"size of queue is: "<<abhi.getSize()<<endl;
    if(abhi.isEmpty()) cout<<"Queue is empty"<<endl;
    else cout<<"Queue is not empty"<<endl;
    return 0;
    // 44 min
}