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

class ciruclarQueue{
    public:
        int* arr;
        int size;
        int front;
        int rear;
        ciruclarQueue(int size){
            this->size=size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }
        void push(int data){
            if(isFull()){
                cout<<"Circular Queueu is completely full"<<endl;
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
        void pop(){

            // empty
            if(isEmpty()){
                cout<<"Circular Queue is empty"<<endl;
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
        bool isFull(){
            if((rear+1)%size==front) return true;
            return false;
        }
        bool isEmpty(){
            if(front==-1 && rear ==-1) return true;
            return false;
        }
        void dispay(){
            while(!isEmpty()){
                cout<<arr[front]<<" ";
                pop();
            }
        }
};
int main(){
    ciruclarQueue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.dispay();
    return 0;
}