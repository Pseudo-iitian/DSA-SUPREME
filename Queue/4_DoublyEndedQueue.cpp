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

class Deque{
    public:
        int size;
        int *arr;
        int front;
        int rear;

        Deque(int size){
            this->size = size;
            arr = new int[size];
            front = rear = -1;
        }

        void pushFront(int data){
            if(isFull()){
                cout<<"double ended Queueu is completely full"<<endl;
                return ;
            }
            if(front==-1 && rear==-1){
                front = rear = 0;
            }
            else if(front==0 && rear!=size-1){
                front = size-1;
            }
            else{
                front--;
            }
            arr[front]=data;
        }

        void pushRear(int data){
            if(isFull()){
                cout<<"double ended Queueu is completely full"<<endl;
                return ;
            }
            if(front==-1 && rear==-1){
                front = rear = 0;
            }
            else{
                rear = (rear+1)%size;
            }
            arr[rear]=data;
        }

        void popFront(){
            // empty
            if(isEmpty()){
                cout<<"doubly ended Queue is empty"<<endl;
                return;
            }
            // single element
            else if(front==rear){
                arr[front]=0;
                front = rear = -1;
            }
            // circular nature and normal form both at one time
            else{
                arr[front]=0;
                front=(front+1)%size;
            }   
        }

        void popRear(){
            // empty
            if(isEmpty()){
                cout<<"doubly ended Queue is empty"<<endl;
                return;
            }
            // single element
            else if(front==rear){
                arr[front]=0;
                front = rear = -1;
            }
            // circular nature and normal form both at one time
            else if(rear == 0){
                rear = size-1;
            }
            else{
                arr[rear]=0;
                rear--;
            }
            // else{
            //     arr[rear]=0;
            //     rear = (rear-1)%size;
            // }   
        }

        bool isFull(){
            if((rear+1)%size==front) return true;
            return false;
        }
        bool isEmpty(){
            if(front==-1 && rear ==-1) return true;
            return false;
        }
};
int main(){
    Deque dq(3);
    dq.pushRear(3);
    dq.pushRear(4);
    dq.pushRear(2);
    dq.popFront();
    dq.pushFront(3);
    dq.popRear();
    return 0;
}