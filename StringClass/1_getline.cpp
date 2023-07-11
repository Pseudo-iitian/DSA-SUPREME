#include<iostream>
using namespace std;
#include<string.h>

// writing the code for taking string as input
void getline(istream &input, string & str){
    str.clear();
    char ch;
    while(cin.get(ch)){
        if(ch=='\n') break;
        str+=ch;
    }
}

// istream& getline (istream& is, string& str);
int main()
{
    // string s;
    // getline(cin,s);
    // cout<<s;

    // char str[10];
    // cin.getline(str,45,'0'); // it is for charachter
    // cout<<str;

    // string str;
    // int t = 4;
    // while(t--){
    //     getline(cin,str);
    //     while(str.length()==0){
    //         getline(cin,str);
    //     }
    //     cout<<str<<" : newline"<<endl;
    // }

    // converting char array to string
    // string s;
    // char a[]={'a','b','h','i'};
    // s = string(a);
    // cout<<s<<endl;

    // strcmp is for char arrayy
    // char a[] = "helo";
    // char b[] = "helo";
    // if(strcmp(a,b)==0){
    //     cout<<"yes both are same";
    // }

    // strcpy for char array only
    // char a[25]="abhi";
    // char b[25] = "shek";
    // strcpy(b,a);
    // cout<<b;

    // strcat(a,b) a+b
    // strcat(a,b);
    // cout<<a<<endl;

    // to get length of string

    // cout<<"the size of a string is: "<<strlen(a)<<endl;

    // push_back

    // string str;
    // str.push_back('a');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;;

    // capacity()

    // string str = "he";
    // // cout<<str.capacity()<<endl;
    // str.resize(30);
    // cout<<str.size()<<endl;

    // string str = "helo ji ";
    // string:: iterator it = str.begin();
    // // str.rbegin(), str.end(), str.rend(),etc.
    // cout<<*it<<endl;

    // string a = "ram";
    // string b = "seeta";
    // swap(a,b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    return 0;
}