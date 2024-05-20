/*
in circular linked list we don't need to use head pointer as 
much nbut we rather can insert using tail pointer everywhere 

EXPLANATION OF THE IMPLEMENTATION:-
lets say there is a value x present already in the linked list 
so we will take value lets name it y and then we search through linked list
if x is present there in the linked list then we insert y after x 
this is what we going to perform now

WE WILL BE DOING THIS ONLY USING tail POINTER */

#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next ;

    //constructor call
    Node(int data){
        this->data=data;
        this->next = NULL;
        
    }

    //destructor call
    ~Node(){
        while(this->next! = NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertAfterValue(Node* pointer, int element , int value){
    //when there is no element in the linked list, means it is an empty list 
    if (tail == NULL)
{
    Node* newNode = new Node(value);
    tail = newNode;
    newNode->next = newNode;// since it is an cirularr linked list so it pointing towards itself only 

}    
//now this part is for the non empty linked list , it means the 
else{
    
}
}

int main(){
    Node* pointer = NULL;


}