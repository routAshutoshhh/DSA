#include<iostream>
using namespace std;

int main(){

    // char *c = "abcde";
    // cout << c<<endl;
    
    char ch[10]="abcde";

    char *temp = &ch[0];

    cout<<*temp<<endl;
    cout<<temp<<endl;
    cout<<ch<<endl;
    cout<<*(&(*temp)) <<endl;
    cout<< &(*temp)<< endl;

}
