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
        int *arr;
        int front;
        int rear;
        int size;
        Queue(int size){
            this->size=size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }
        bool isFull(){
            if(rear == size-1) return true;
            return false;
        }
        bool isEmpty(){
            if(front==-1 && rear==-1) return true;
            return false;
        }
        void push(int data){
            if(isFull()){
                cout<<"Queue is full now"<<endl;
                return;
            }
            else if(isEmpty()) front = rear = 0;
            else{
                rear++;
            }
            arr[rear]=data;
        }
        void pop(){
            if(isEmpty()){
                cout<<"Queue is Empty now"<<endl;
                return ;
            }
            else if(front==rear){
                arr[front]=0;
                front=-1;
                rear=-1;
            }
            else{
                arr[front]=0;
                front++;
            }
        }
};
int main(){
    Queue q(3);
    q.push(4);
    q.push(4);
    q.push(4);
    // q.push(4);
    q.pop();
    q.pop();
    q.pop();
    // q.pop();
    return 0;
}