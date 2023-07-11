#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    Node(int data){
        this->next = NULL;
        this->data = data;
    }
    Node(){
        this->data = 0;
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

Node* reverse(Node* &head){
    Node* temp = NULL;
    while(head!=NULL){
        Node* right = head->next;
        head->next = temp;
        temp = head;
        head = right;
    }
    return temp;
}
bool isPalindrome(Node* &head){
    Node* temp = head;
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next == NULL){
        //single elements was there
        return true;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    // reverse loop
    Node* reverseLLHead = reverse(slow->next);
    
    slow->next = reverseLLHead;
    Node* temp1 = head;
    Node* temp2 = reverseLLHead;
    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,1);
    // insertAtLast(head,tail,6);
    // check whether the given linked list is palindrome or not ?

    if(isPalindrome(head)){
        cout<<"Yes! It is valid Palindrome"<<endl;
    }
    else{
        cout<<"No! It is not a valid Palindrome"<<endl;
    }
    return 0;
}