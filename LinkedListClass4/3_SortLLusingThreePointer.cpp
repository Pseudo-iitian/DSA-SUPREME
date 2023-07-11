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

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* sort(Node* &head){
    Node* zerohead = new Node();
    Node* zerotail = zerohead;

    Node* onehead = new Node();
    Node* onetail = onehead;

    Node* twohead = new Node();
    Node* twotail = twohead;

    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){

            // isolate the zero node first
            Node* curr = temp;
            temp = temp->next;
            curr->next = NULL;

            // then append it to zerohead
            zerotail->next = curr;
            zerotail = curr;
        }
        else if(temp->data== 1){
            Node* curr = temp;
            temp = temp->next;
            curr->next = NULL;

            onetail->next = curr;
            onetail = curr;
        }
        else if(temp->data == 2){
            // isoate then
            Node* curr = temp;
            temp = temp->next;
            curr->next = NULL;

            // join the tail to isolated part
            twotail->next = curr;
            twotail = curr;
        }
    }

    // join them

    zerotail->next = onehead->next;
    onetail->next = twohead->next;
    onehead = NULL;
    twohead = NULL;
    
    // rempove dummy nodes

    delete onehead;
    delete twohead;

    // return head of the modified linked list
    Node* newHead = zerohead->next;
    delete zerohead;
    return newHead;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,0);    
    insertAtLast(head,tail,0);    
    insertAtLast(head,tail,0);    
    insertAtLast(head,tail,0);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,2);
    // problems hai 
    Node* temp = sort(head);
    print(temp);
    return 0;
}