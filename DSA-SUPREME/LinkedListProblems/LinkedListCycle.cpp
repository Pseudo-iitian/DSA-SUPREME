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
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void createCycle(Node* &head,Node* &tail,int position){
    int i=1;
    Node* temp = head;
    while(i<position){
        temp = temp->next;
        i++;
    }
    tail->next=temp;
}
bool hasCycle(Node *head) {
    while(head!=NULL){
        head->data=INT_MIN;
        head = head->next;
        if(head->data==INT_MIN) return true;
    }
    return false;
}
int main(){
    Node* head=NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,4);
    insertAtLast(head,tail,0);
    insertAtLast(head,tail,-1);
    int position = 1;
    createCycle(head,tail,position+1);
    if(hasCycle) cout<<"true";
    else cout<<"false";
    // print(head);
    return 0;
}