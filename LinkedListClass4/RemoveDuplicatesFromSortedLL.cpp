#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtLast(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteDuplicateNodes(Node* &head){
    // sorted LL is given
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        cout<<"LL is having only single node"<<endl;
        return;
    }
    // >1 node is present here
    Node* slow = head;
    Node* fast = slow->next;
    while(fast!=NULL){
        if(slow->data != fast->data){
            slow = slow->next;
            fast = fast->next;
        }
        else{
            Node* temp = fast;
            fast = fast->next;
            temp->next = NULL;
            slow->next = fast;
            delete temp;
        }
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,4);
    insertAtLast(head,tail,4);
    insertAtLast(head,tail,4);
    deleteDuplicateNodes(head);
    print(head);
    return 0;
}