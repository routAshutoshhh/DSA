#include<iostream>
using namespace std;

int main(){
    int num = 9;
    // int a = num;
    // a++;
    // cout<<num<<endl;
    // cout<<a<<endl;

    //for the case of pointers 
    //copying in pointers
    int *p = &num;
    int *q = 0;
    q = p;
    //or we can do this 
    //int *q = p;
    cout<<"the address value which is stored by q and p "<<q<<"-"<<p<<endl;
    cout<<"the address of q and p "<<&q<<"-"<<&p<<endl;
    cout<<"the value to whicih q and p pointing to "<<*q<<"-"<<*p<<endl;
    cout<<endl;

    //pointer arithemetic 
     int x = 5;
     int *ptr = &x;
     (*ptr)++;
     cout<<*ptr;


}