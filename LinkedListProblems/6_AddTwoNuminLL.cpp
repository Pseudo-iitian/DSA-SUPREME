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
    Node(){
        this->data=0;
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
    tail->next=newNode;
    tail = newNode;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* addTwoNum(Node* &l1,Node* l2){
    int c = 0;
    Node* newHead = new Node();
    Node* temp = newHead;
    while(l1!=NULL || l2!=NULL || c!=NULL){
        int sum = 0;
        if(l1!=NULL){
            sum+=l1->data;
            l1=l1->next;
        }
        if(l2!=NULL){
            sum+=l2->data;
            l2=l2->next;
        }
        sum+=c;
        c=sum/10;
        Node* newNode = new Node(sum%10);
        temp->next = newNode;
        temp = newNode;
    }
    return newHead->next;
}
int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    insertAtLast(head1, tail1, 2);
    insertAtLast(head1, tail1, 4);
    insertAtLast(head1, tail1, 3);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    insertAtLast(head2,tail2,5);
    insertAtLast(head2,tail2,6);
    insertAtLast(head2,tail2,4);

    // print(head1);
    // cout<<endl;
    // print(head2);
    Node* temp = addTwoNum(head1,head2);
    print(temp);
    return 0;
}