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

void insertAtLast(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next=newNode;
    tail = newNode;
}

void deleteNode(Node* &temp){
    temp->data = temp->next->data;
    temp->next=temp->next->next; // temp will point to null
    Node* curr = temp->next;
    delete curr;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* getPosition(Node* &head,Node* &tail, int position){
    int pos = 1;
    Node* temp = head;
    while(pos<position){
        temp=temp->next;
        pos++;
    }
    return temp;
}
int main(){
    // i have to delete that node which is not last node
    // here a reference to deleting node is given 
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,4);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,3);
    Node* temp = getPosition(head,tail,3);
    // cout<<temp->data;
    deleteNode(temp);
    print(head);
    return 0;
}