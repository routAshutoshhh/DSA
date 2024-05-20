//recursive method of reversing the linked list 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        delete next;
        this->next = NULL;
    }
};

void insertionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head =temp ;
}

void ReverseLL(Node* &head){

}

void print(Node* &head){
    //creating a new node for traversing
    Node* temporary = head;

    while(temporary != NULL){
        cout<<temporary->data<<" ";
        temporary= temporary->next;
    }
    cout<<endl;
}


int main(){
    Node* head  = new Node(12);
    insertionAtHead(head,78);
    insertionAtHead(head,98);
    insertionAtHead(head,88);
    insertionAtHead(head,108);
    
    print(head);
    ReverseLL(head);
    print(head);
    

}