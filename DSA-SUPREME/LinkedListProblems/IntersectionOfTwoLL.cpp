#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtLast(Node* &head,Node* &tail ,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int findLength(Node* head){
    int len = 0;
    while(head!=NULL){
        head = head->next;
        len++;
    }
    return len;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head<<endl;
        head = head->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,4);
    print(head);
    return 0;
}