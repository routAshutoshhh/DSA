#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //further creation
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* n = new Node(10);
    cout<<"the data is "<< n->data<<endl;
    cout<<"the address is "<<n->next;


}