#include<iostream>
#include<array>
using namespace std;

array<int,6> a={1,2,3,4,5,6};
int main(){
    cout<<"the no at 2nd postition is "<<a.at(1)<<endl;//0(1)
    cout<<"the element at the front is "<<a.front()<<endl;//0(1)
    cout<<"the element at the rear is "<<a.back()<<endl;//same
    cout<<"check whether  the array is empty or not "<<a.empty()<<endl;//same  time complexity
}