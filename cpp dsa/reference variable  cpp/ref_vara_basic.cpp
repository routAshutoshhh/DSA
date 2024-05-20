#include<iostream>
using namespace std;

int update(int &n){
    n++;
}

int main(){
    int a = 5;
    cout << "the first value of a "<< a<<endl;
    cout<< " passsing by reference "<<endl;
    update(a);
    cout<< " the updated value of a is "<< a<<endl;
}