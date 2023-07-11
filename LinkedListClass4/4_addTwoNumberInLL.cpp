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

Node* add(Node* head1,Node* head2){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    if(head1==NULL) return head2;
    if(head2=NULL) return head1;
    while(head1!=NULL && head2!=NULL){
        int sum = head1->data+head2->data+carry;
        carry = sum/10;
        int digit = sum%10;
        insertAtLast(ansHead,ansTail,digit);
        head1=head1->next;
        head2= head2->next;
    }
    while(head1!=NULL){
        int sum = head1->data+carry;
        carry = sum/10;
        int digit = sum%10;
        insertAtLast(ansHead,ansTail,digit);
        head1 = head1->next;
    }
    while(head2!=NULL){
        int sum = head2->data+carry;
        carry = sum/10;
        int digit = sum%10;
        insertAtLast(ansHead,ansTail,digit);
        head2 = head2->next;
    }
    // while(carry!=0){
    //     int sum = carry;
    //     int digit = sum%10;
    //     carry = sum/10;
    //     insertAtLast(ansHead,ansTail,digit);
    // }
    if(carry) insertAtLast(ansHead,ansTail,carry);
    return ansHead;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    // head1
    insertAtLast(head1,tail1,9);
    insertAtLast(head1,tail1,9);

    // head2
    insertAtLast(head2,tail2,9);
    insertAtLast(head2,tail2,9);
    insertAtLast(head2,tail2,9);

    Node* ans = add(head1,head2);
    print(ans);
    return 0;
}