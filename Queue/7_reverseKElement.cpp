#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <bitset>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

// using recursion
void reverse(queue<int> &q,int k,int counter){
    if(counter==k) return;
    int front = q.front();
    q.pop();
    reverse(q,k,counter+1);
    q.push(front);
}

void revKelements(queue<int> &q,int k){
    if(k<0) return;
    reverse(q,k,0);
    int rem = q.size()-k;
    for(int i = 0;i<rem;++i){
        int front = q.front();
        q.pop();
        q.push(front);
    }
}
int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    int k = 4;
    // reverse first k elements

    display(q);
    revKelements(q,k);
    display(q);
    return 0;
}