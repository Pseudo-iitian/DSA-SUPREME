#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout<<"deleting Node with data "<<this->data<<endl;
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
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}

void efficientDelete(int position, Node* &head, Node* &tail){
    Node* temp = head;
    Node* fast = temp;
    Node* slow = temp;
    for(int i=1;i<=position;++i){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    Node* prev = slow;
    Node* curr= prev->next;
    prev->next = curr->next;
    curr->next=NULL;
    delete curr;
}

void deleteNode(int position, Node*& head, Node* &tail){
    if(head==NULL){
        cout<<"Node is already empty";
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete(temp); // calling distructor     
    }
    int len = findLength(head);
    if(position==len){
        int i = 1;
        // 1 find prev
        Node* prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        Node* temp=tail;
        // 2 assign 
        prev->next=NULL;
        // 3
        tail=prev;
        // 4 step 
        delete temp;
        return;
    }
    // deleting the at any postion node
    position = findLength(head) - (position-1);
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
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertNode(head,tail,2);
    insertNode(head,tail,4);
    insertNode(head,tail,1);
    insertNode(head,tail,3);
    insertNode(head,tail,5);
    insertNode(head,tail,6);
    int n = 4; // delete the last node
    efficientDelete(n,head, tail);
    print(head);
    return 0;
}