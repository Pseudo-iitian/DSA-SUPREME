#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtLast(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head=newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next=newNode;
    tail=newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int findLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void deleteMiddleNode(Node* &head, Node* &tail){
    int len = findLength(head);
    if(len%2==0){
        int position = len/2+1;
        int i =1 ;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        Node* curr = prev->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    else{
        int position = (len+1)/2;
        int i=1;
        Node* prev = head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        Node* curr = prev->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

Node* middleNode(Node* &head, Node* &tail){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        // fast=fast->next;
    }
    return slow;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head, tail, 1);
    insertAtLast(head, tail, 2);
    insertAtLast(head, tail, 3);
    insertAtLast(head, tail, 4);
    insertAtLast(head, tail, 5);
    // insertAtLast(head, tail, 6);

    // middle item delete kerna hai
    // deleteMiddleNode(head, tail);
    Node* midNode =  middleNode(head,tail);
    cout<<midNode->data<<endl;
    // print(head);
    return 0;
}