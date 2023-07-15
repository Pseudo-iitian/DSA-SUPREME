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

class circularQueue{
    public:
        int size;
        int* arr;
        int front;
        int rear;
        circularQueue(int size){
            this->size = size;
            this->front = -1;
            this->rear = -1;
            arr = new int[size];
        }
        void push(int data){
            // 1- full case
            if((rear+1)%size==front){
                cout<<"circular queue is full"<<endl;
                return;
            }
            // 2- front=-1 
            else if(front==-1){
                front = rear = 0;
                arr[rear]=data;
            }
            // 3 - cicular push
            else if(rear == size-1 && front!=0){
                rear=0;
                arr[rear]=data;
            }
            // normal case
            else{
                rear++;
                arr[rear]=data;
            }
        }    
        void pop(){
            // empty check
            // single element
            // cicular check
            // normal element
            if(front==-1){
                cout<<"queeue is empty"<<endl;
                return;
            }
            else if(rear == front){
                arr[front]=0;
                rear = -1;
                front = -1;
            }
            else if(front==size-1){
                front=0;   
            }
            else{
                front++;   
            }
        }  
};
int main(){
    circularQueue cq(5);
    cq.push(4);
    cq.push(4);
    cq.push(4);
    cq.push(4);
    cq.push(4);
    // cq.push(4);
    cq.pop();
    cq.pop();
    cq.pop();
    cq.pop();
    cq.pop();
    return 0;
}

// 1:31:09