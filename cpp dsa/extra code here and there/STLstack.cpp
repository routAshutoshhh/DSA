#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> str;
    str.push("ashu");
    str.push("ananta");

    cout<<"top element "<<str.top()<<endl;
    cout<<"empty or not "<<str.empty()<<endl;
    cout<<"size of stack "<<str.size()<<endl;

    str.push("jaitley");
    cout<<"top element "<<str.top()<<endl;
    str.pop();
    cout<<"size"<<str.size()<<endl;
    
}