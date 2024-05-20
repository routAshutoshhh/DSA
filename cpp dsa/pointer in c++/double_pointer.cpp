#include<iostream>
using namespace std;

int main(){
    int i = 9;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;

    //printing the value 9 using various wAYS 
    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<***p3<<endl;

//printing the addressess of all the pointers

cout<<"the address of i "<<&i<<endl;
cout<<"the address of p1 "<<&p1<<endl;
cout<<"the address of p2 "<<&p2<<endl;
cout<<"the address of p3 "<<&p3<<endl;

//printing the values stored in all the pointers only  
cout<<"the value stored in pointer p1 "<<p1<<endl;
cout<<"the value stored in pointer p2 "<<p2<<endl;
cout<<"the value stored in pointer p3 "<<p3<<endl;

//lets say we want to print the value stored in  pointer p2,ways to do it 
cout<< p2 <<endl;
cout<< &p1<<endl;//since p2 pointing to value stored at p1 hence we can print the address of p1 itself
cout<< *p3 << endl;//since p3 points to what is stored in p2 which is its address basically 




    
}