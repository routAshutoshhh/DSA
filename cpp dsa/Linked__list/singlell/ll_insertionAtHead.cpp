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

void insertionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head =temp ;
}

void print(Node* &head){
    Node* temp= head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    }



int main(){
    Node* n = new Node(10);
    // cout<<"the data is "<< n->data<<endl;
    // cout<<"the address is "<<n->next<<endl;
    Node* head = n;
//first input
    insertionAtHead(head, 15);
    print(head);


//second insertion and printing 
    insertionAtHead(head, 16);
    print(head);

}