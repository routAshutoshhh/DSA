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

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp ;
    tail = tail->next;

}

void print(Node* &head){
    //creating new node
    Node* tempo= head;

    while(tempo !=NULL){
        cout<<tempo->data<<" ";
        tempo = tempo->next;
    }
    cout<<endl;
    }


int main(){
    Node* n = new Node(10);
    // cout<<"the data is "<< n->data<<endl;
    // cout<<"the address is "<<n->next;
    Node* head = n;

    Node *tail= n;

    insertAtTail(tail,55);

    insertAtTail(tail,60);
    print(head);// printing from head is pointing to first node and since tail has moved to the last element 
    print(tail);// ths will print the last  element only as it is pointing to the lsat element only 


}