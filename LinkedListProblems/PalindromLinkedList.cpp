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
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

vector<int> formNum(Node* &head,Node* &tail){
    vector<int> ans;
    Node* temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    return ans;
}

bool isPalindrome(vector<int> &ans){
    int i=0,j=ans.size()-1;
    while(i<j){
        if(ans[i]!=ans[j]) return false;
        i++;j--;
    }
    return true;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtLast(head,tail,1);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,2);
    insertAtLast(head,tail,1);
    vector<int> ans = formNum(head,tail);
    if(isPalindrome(ans)) cout<<"true";
    else cout<<"false";
    // print(head);
    return 0;
}