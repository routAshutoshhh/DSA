#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,4,6};
    int *ptr = arr;
    cout << *ptr << endl;
    (*ptr)++;
    cout << *ptr << endl;

    //again other case 
    cout<<"other case"<<endl;
    int a[5]= {3,8,99};
    cout<<++(*a)<<endl;
    cout<<"further more deeper concept"<<endl;
    int i = 2;
    cout<<i[arr];
}