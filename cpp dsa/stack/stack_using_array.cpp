#include<iostream>
using namespace std;

class Stack{
public:
//properties
int size;//size of the array 
int * arr;//array
int top;//index

//behaviour
//constructor
Stack(int size){
 this->size = size;
 int *arr = new int[size];
 top =-1;
 }

 void push(int data){
    if(size-top>1)
{
    arr[++top] = data;//incereasing the top index ,so it becomes 0 anhence we can insert elements
} 
else{
    cout<<"stack is already  full "<<endl;
}

}

 void pop(){
    if(top>-1){
        top--;
    }
    else{
        cout<<"element khatam ho gya re baba"<<endl;
    }
 }


 int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"stack is empty "<<endl;
        return -1;
    }
    
 }

};

int main(){

    Stack s(5);
    s.push(1);
    s.push(45);
    s.push(22);

    cout<<"here is the top element"<<s.peek()<<endl;
    s.pop();
    cout<<"here is the top element"<<s.peek()<<endl;
    
}