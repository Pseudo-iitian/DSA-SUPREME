#include<iostream>
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

void insertAtLast(Node* &head,Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void sort(Node* &head){
    Node* temp = head;
    int zero=0,one=0,two=0;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            one++;
        }
        else if(temp->data == 2){
            two++;
        }
        temp=temp->next;
    }
    temp = head;
    while(zero--){
        temp->data = 0;
        temp = temp->next;
    }
    while(one--){
        temp->data = 1;
        temp = temp->next;
    }
    while(two--){
        temp->data=2;
        temp = temp->next;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,0);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,0);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,0);
    insertAtLast(head,tail,1);
    // print(head);
    sort(head);
    print(head);
    return 0;
}