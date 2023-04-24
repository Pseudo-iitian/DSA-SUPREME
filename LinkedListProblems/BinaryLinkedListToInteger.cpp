#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public: 
    int data;
    ListNode* next;

    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
    ListNode(){
        this->data=0;
        this->next=NULL;
    }
};

void insertAtHead(ListNode* &head,ListNode* &tail,int data){
    ListNode* newNode = new ListNode(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

ListNode* reverseLinkedList(ListNode* head){
    ListNode* temp = NULL;
    while(head!=NULL){
        ListNode* right = head->next;
        head->next=temp;
        temp = head;
        head = right;
    }
    return temp;
}
int formNum(ListNode* &head){
    ListNode* temp = head;
    int sum = 0;
    int i=0;
    while(temp!=NULL){
        sum = sum + pow(2,i)*(temp->data);
        temp = temp->next;
        i++;
    }
    return sum;
}

void print(ListNode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    insertAtHead(head,tail,0);
    // insertAtHead(head,tail,0);
    // insertAtHead(head,tail,1);
    
    ListNode* newhead = reverseLinkedList(head);
    // print(newhead);
    int sum = formNum(newhead);
    cout<<sum;
    return 0;
}