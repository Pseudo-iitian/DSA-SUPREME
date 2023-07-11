#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    // Node* head = new Node(); // creating new node
    Node* First = new Node(4);
    Node* Second = new Node(5);
    Node* Third = new Node(1);
    Node* Fourth = new Node(3);
    Node* Fifth = new Node(2);

    // head->next= First;
    First->next=Second;
    Second->next=Third;
    Third->next=Fourth;
    Fourth->next=Fifth;
    

    print(First);
    return 0;
}