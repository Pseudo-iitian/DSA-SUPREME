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

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next=newNode;
    tail=newNode;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* MergeTwoSortedLinkedList(Node* &first,Node* &second){
    Node* head=NULL;
    Node* tail = NULL;
    if(first==NULL && second==NULL){
        cout<<"sorry!! there is no meaning for mergin two empty linked list"<<endl;
        return 0;
    }
    while(first!=NULL && second!=NULL){
        if(first->data < second->data){
            //1 create a new node
            insertAtTail(head,tail,first->data);
            first=first->next;
        }
        else if(second->data<first->data){
            insertAtTail(head,tail,second->data);
            second=second->next;
        }
        else{
            // both are equals then input both at tail
            insertAtTail(head,tail,first->data);
            insertAtTail(head,tail,second->data);
            first=first->next;
            second= second->next;
        }
    }
    while(first!=NULL){
        insertAtTail(head,tail,first->data);
        first=first->next;
    }
    while(second!=NULL){
        insertAtTail(head,tail,second->data);
        second=second->next;
    }
    return head;
}

Node* emplaceMerge(Node* first, Node* second){
    if(first==NULL) return second;
    if(second==NULL) return first;
    // res assigned to less head
    if(first->data>second->data){
        Node* temp = first;
        second=first;
        first=temp;
    }
    Node* newHead = first;
    while(first!=NULL && second!=NULL){
        Node* temp = NULL;
        while(first!=NULL && first->data<=second->data){
            temp = first;
            first=first->next;
        }
        temp->next=second;
        // swap 
        Node* tmp = first;
        first=second;
        second=tmp;
    }
    return newHead;
}
int main(){
    // merge two sorted linked list
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;  

    cout<<"Inerting elements for the first linked list"<<endl;
    insertAtTail(head1,tail1,1);
    insertAtTail(head1,tail1,2);
    insertAtTail(head1,tail1,4);

    cout<<"Inserting elements for the second linked list"<<endl;
    insertAtTail(head2,tail2,1);
    insertAtTail(head2,tail2,3);
    insertAtTail(head2,tail2,4);

    // print(head1);
    // cout<<endl;
    // print(head2);

    // Node* newHead = MergeTwoSortedLinkedList(head1,head2);
    Node* res = emplaceMerge(head1,head2);
    print(res);
    return 0;
}