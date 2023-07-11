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

int main(){
    queue<int> q;
    q.push(23);
    q.push(3);
    q.push(4);
    q.push(1);

    cout<<"size of element is "<<q.size()<<endl;

    q.pop();

    cout<<"size of element is : "<<q.size()<<endl;

    if(q.empty()) cout<<"queue is empty()"<<endl;
    else cout<<"queue is not empty and front value is "<<q.front()<<endl;

    return 0;
}