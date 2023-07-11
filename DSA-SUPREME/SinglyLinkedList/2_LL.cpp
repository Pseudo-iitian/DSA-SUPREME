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
    ~Node(){
        // write a distructor to delete node
        cout<<"node with value : "<<this->data<<" deleted"<<endl;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertAtHead(Node* &head,Node* &tail, int data){
    // check for empty condition
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1 -> first create a new node and put value into it
    Node* newNode = new Node(data);
    // step 2 -> then 
    newNode->next = head;
    // step 3 -> 
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // i want to insert at the rightmost end of the linked list
    // step 1 -> create a new node
    Node* newNode = new Node(data);
    // step 2 -> 
    tail->next= newNode;
    // step 3 -> 
    tail = newNode;
}

int findLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(int data, int position, Node* &head, Node* tail){
    // if linked list is empty then position does'not matter we have to insert at head
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(position>=len){
        insertAtTail(head,tail,data);
        return;
    }
    // step 1-> find position
    int i=1;
    Node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    Node* curr = prev->next;
    // step 2 -> create a new node
    Node* newNode = new Node(data);
    // step 3 -> 
    newNode->next = curr;
    // step 4 -> 
    prev->next=newNode; 

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
    // Node* head = new Node(10); // creating new node
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,23);
    insertAtTail(head,tail,43);
    // int position = 3;   
    // position = 5;
    // insertAtPosition(530,position-1,head,tail);
    // deleteNode(1,head,tail);
    deleteNode(3,head,tail);
    print(head);
    return 0;
}