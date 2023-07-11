#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(){
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

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteDuplicateNodes(Node* &head){
    // unsorted LL is given
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        cout<<"LL is having only single node"<<endl;
        return;
    }
    // >1 node is present here
    Node* curr= head;
    Node* prev=NULL;
    unordered_set<int> st;
    while(curr!=NULL){
        if(st.find(curr->data)!=st.end()){
            // elemnts exist
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        else{
            st.insert((curr->data));
            prev=curr;
        }
        curr = prev->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,3);
    insertAtLast(head,tail,4);
    insertAtLast(head,tail,2);
    deleteDuplicateNodes(head);
    print(head);

    return 0;
}