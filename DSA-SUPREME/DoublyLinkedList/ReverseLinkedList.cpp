#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head= newNode;
        tail = newNode;
        return;
    }

    tail->next=newNode;
    tail = newNode;
}

Node* reverse(Node* &prev,Node* &curr)
{
    if(curr == NULL){
        return prev;
    }
    Node* forward = curr->next;
    curr->next=prev;
    reverse(curr,forward);
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head= head->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);

    //reverse the linked list
    Node* prev = NULL;
    Node* curr= head;
    Node* temp = reverse(prev,curr);

    print(temp);
    return 0;
}