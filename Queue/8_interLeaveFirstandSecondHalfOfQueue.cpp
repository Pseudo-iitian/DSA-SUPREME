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

void interLeave(queue<int> &q){
    int n = q.size();
    queue<int> newq;
    for(int i=0;i<n/2;++i){
        int front = q.front();
        newq.push(front);
        q.pop();
    }
    queue<int> res;
    while(!q.empty() && !newq.empty()){
        int front1 = newq.front();
        int front2 = q.front();

        res.push(front1);
        res.push(front2);
        newq.pop();
        q.pop();
    }
    if(n&1){
        int front = q.front();
        res.push(front);
        q.pop();
        }
    display(res);
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    // q.push(80);
    interLeave(q);
    return 0;
}