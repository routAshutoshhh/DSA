//approach 1 of reversing the linked list 
/*
in this method of reversing the linked list we use two pointer approach 

*/
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
    Node* current = head;
    Node* behind = NULL;
    Node* forward = NULL;


    while(current != NULL){
    forward = current->next;//forward now pointing to the node that is ahead of current
    current->next = behind;//current now points to its backward node
    behind = current;//the node behind the current node is now come forward to the place of current
    current = forward;//and then current moves ahead at the place of forward
    cout<<"the behind node is"<<behind->data<<endl;
    }
    head = behind;

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