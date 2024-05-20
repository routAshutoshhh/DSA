//generic code to insert and data at any postion


#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    
//constructor 
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;// sotring the data in the value container so to print the node rthat ios deleted 
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        } 
        cout<<"the memory has been free for the node with data "<<value <<endl;
    }
};

//functionn to insert at head
void insertionAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head =temp ;
}

//function to insert at the end 
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp ;
    tail = tail->next;

}

//to insert at any position 
void insertAtPos(Node* &head,Node* &tail, int position,  int data){

    //iinsert at the start
    if( position == 1){
        insertionAtHead(head,data);
        return;
    }


    //insert at any position
    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp  = temp->next;
        cnt++;
    }

    //insert at the last position and unpdating the tail value here
    if(temp->next ==NULL){
        insertAtTail(tail,data);
        return;
    }


//creating the node which is going to be inserted 
    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp->next ;
    temp->next = nodeToInsert;
    
}

//function to print node 
void print(Node* &head){
    //creating a new node for traversing
    Node* temporary = head;

    while(temporary != NULL){
        cout<<temporary->data<<" ";
        temporary= temporary->next;
    }
    cout<<endl;
}

//function to delete certain node
void deleteNode(Node* &head, int position){

    //deleting the starting node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free for the start node
        temp->next = NULL;
        delete temp;
    }

    //deleting the middle or end node

    else{
        Node *current = head;
        Node *prev = NULL;

        int cnt = 1;

        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }
        //now current pointer node is at the position that is to be deleted 
        //and prev is behind it so we gotta delete the current which is pointing to the node which is to be deleted 

        prev->next = current->next;
        current->next = NULL;
        delete = current;

    }
}

int  main(){

    Node* n1 = new Node(50);
    Node* head = n1;
    Node* tail = n1;
// making a linked list already
    insertAtTail(tail,90);
    insertAtTail(tail,80);
    insertAtTail(tail,899);
    insertAtTail(tail,69);
    print(head);

    //now we will start inserting at any position
    insertAtPos(head,tail,4,56);
    //inserting at the last 
    insertAtPos(head,tail,7,90900);
    //inserting at the first
    insertAtPos(head,tail,1,33);
    print(head);
    cout<<"the value pointed by head "<<head->data<<endl;
    cout<<"the value pointed by tail pointer "<<tail->data;


}