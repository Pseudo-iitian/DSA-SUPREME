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
    deque<int> dq;
    dq.push_front(4);
    dq.push_back(5);
    dq.push_front(10);
    dq.push_back(20);

    cout<<"size: "<<dq.size()<<endl;
    dq.pop_front();
    cout<<"size: "<<dq.size()<<endl;
    dq.pop_back();
    cout<<"size: "<<dq.size()<<endl;

    if(dq.empty()) cout<<"DQ is empty()"<<endl;
    else cout<<"DQ is not empty"<<endl;

    cout<<"Front element: "<<dq.front()<<" Back element: "<<dq.back()<<endl;
    return 0;
}