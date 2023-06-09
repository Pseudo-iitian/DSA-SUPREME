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
};

void insertAtLast(ListNode* &head,ListNode* &tail,int data){
    ListNode* newNode = new ListNode(data);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next=newNode;
    tail = newNode;
}

void print(ListNode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

ListNode* removeElements(ListNode* &head,int val){
    if(head==NULL) return head;
    ListNode* temp = head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            temp->next=temp->next->next;
        }
        else temp=temp->next;
    }
    if(head->data==val){
        head =head->next;
    }
    return head;
}
int main(){

    ListNode* head = NULL;
    ListNode* tail = NULL;
    int val = 6;
    // insertAtLast(head, tail ,6);
    insertAtLast(head, tail ,2);
    insertAtLast(head, tail ,6);
    insertAtLast(head, tail ,3);
    insertAtLast(head, tail ,4);
    insertAtLast(head, tail ,5);
    insertAtLast(head, tail ,6);

    ListNode* newHead = removeElements(head,val);
    print(newHead);
    return 0;
}