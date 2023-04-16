#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node( int data ){
        this->data=data;
        this->next = NULL;
        this->prev = NULL;
    }
};


int findLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp !=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head,Node* &tail, int data){
    if(head==NULL){
        // empty linked list ke case me 
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return ;
    }

    //1 create a node wiht head and tail point to null and with data value;
    Node* newNode = new Node(data);
    //2 
    newNode->next=head;
    //3 
    head->prev=newNode;
    //4
    head = newNode;
}
void insertAtTail(Node* &head, Node* &tail , int data){
    if(head==NULL)
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtPosition(Node* &head, Node* &tail, int position,int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }
    int i = 1;
    Node* prevNode= head;
    while(i<position-1){
        prevNode = prevNode->next;
        i++;
    }
    // we get prevnode
    Node* curr = prevNode->next;
    Node* newNode = new Node(data);
    //1 prenode
    prevNode->next=newNode;
    newNode->prev=prevNode;
    //2 currn ode
    curr->prev = newNode;
    newNode->next=curr;

}

void deleteAtBegin(Node* &head,Node* tail){
    if(head == NULL){
        cout<<"Linked list is empty, we can not delete the node"<<endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // Node* firsNode = new Node(10);
    // Node* secondNOde = new Node(20);
    // Node* thirdNode= new Node(30);

    // // connect these node
    // firsNode->prev=NULL;
    // firsNode->next=secondNOde;
    // secondNOde->prev=firsNode;

    // secondNOde->next=thirdNode;
    // thirdNode->prev=secondNOde;
    // thirdNode->next = NULL; 

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,101);
    insertAtTail(head,tail,40);
    insertAtPosition(head,tail,6,20);
    insertAtPosition(head,tail,1,1000);
    deleteAtBegin(head,tail);
    print(head);
    return 0;
}