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
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

void deleteDuplicates(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else temp = temp->next;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    Node* temp = head;
    while(temp!=NULL){
        while(temp->data==temp->next->data){
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    print(head);
    return 0;
}