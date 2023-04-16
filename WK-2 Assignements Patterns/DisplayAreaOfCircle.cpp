#include<bits/stdc++.h>
using namespace std;

double area(double r){
    return M_PI*r*r;
}
int main(){
    double r;
    cin>>r;
    cout<<"area of circle is "<<area(r);
    return 0;
}
