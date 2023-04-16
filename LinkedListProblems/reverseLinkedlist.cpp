#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
    Node(){
        this->data=0;
        this->next=NULL;
    }
};
void insertNode(Node* &head,Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

Node* reverseNodes(Node* &head, Node* &tail){
    Node* temp = NULL;
    while(head!=NULL){
        Node* right = head->next;
        head->next=temp;
        temp=head;
        head=right;
    }
    return temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    // reverse the linked list
    Node* head = NULL;
    Node* tail = NULL;
    insertNode(head, tail, 1);
    insertNode(head, tail, 2);
    insertNode(head, tail, 3);
    insertNode(head, tail, 4);
    insertNode(head, tail, 5);
    // reverse the node now
    cout<<"before reversing : "<<endl;
    print(head);
    cout<<endl;
    Node* newHead = reverseNodes(head,tail);
    cout<<"after reversing : "<<endl;
    print(newHead);
    
    return 0;
}