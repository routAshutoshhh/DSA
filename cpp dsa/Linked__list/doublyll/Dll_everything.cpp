#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *nxt;

    // constructor to create the node
    Node(int d)
    {
        this->data = d;
        this->nxt = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int val = this->data;
        while (this->nxt != NULL)
        {
            delete nxt;
            this->nxt = NULL;
        }
        cout << "this particular node is deleted " << val << endl;
    }
};

// for inserting at the head
void insertAtHead(Node *&head, int d)
{

    // handling the linked list if the linked list empty
    if (head == NULL)
    {
        Node *temp = new Node(d);
    }
    else
    {
        // create a temporary node first
        Node *temp = new Node(d);

        // checking if head is pointing the first element only
        if (head->prev == NULL)
        {

            temp->nxt = head;  // pointing the next pointer of the new node to head
            head->prev = temp; // pointing the prwv pointer to teh new node that is being inserted
            head = temp;       // updating the head pointer to the new start node
        }
    }
}

/*
for inserting data in the last node(my method)
using head pointer and then traversing through the last
 void insertLast(Node* &head, int data){
     Node* last = head;
     Node* temp = head;
     Node* newInsert  = new Node(data);
     //traversing till last element
     while (temp->nxt != NULL){
         temp = temp->nxt;
     }

    last = temp;

    if(temp->nxt==NULL){
        temp->nxt = newInsert;
        newInsert->prev = temp;
    }
    last = newInsert;
}*/

// another way of implementing the insert at last code ;
/*
method 2 using tail pointer as input
since the tail pointer is still pointing the first element
which if we insert any element at the head , the tail pointer will still be pointing to the last element
void inserAtLast(Node *&tail, int data)
*/

void inserAtTail(Node *&tail, int data)
{

    // handling the linked list if the linked list empty
    if (tail == NULL)
    {
        Node *temp = new Node(data);
    }
    else
    {
        Node *temp = new Node(data);
        tail->nxt = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at any position of your choice
void insertAtPos(Node *&head, Node *&tail, int data, int position)
{
    // if element is to be inserted at the first index
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // creating the node which is to be inserted
    Node *insertNode = new Node(data);

    // temporary node that is to be traverese to the position
    Node *current = head;
    int cnt = 1;
    // agar count 0 se start karte toh position se ek pehle tak iterate karte but since we start at count at 1 toh position-1 se pehle we need to stop !
    while (cnt < position - 1)
    {
        current = current->nxt;
        cnt++;

        /*if the currennt pointer reaches the last node*/
        if (current->nxt == NULL)
        {
            inserAtTail(tail, data);
            return;
        }

        // if the node needs to be inserted in betweeen somewhere
        else
        {
            insertNode->nxt = current->nxt;
            insertNode->prev = current;
            current->nxt->prev = insertNode;
            current->nxt = insertNode;
        }
    }
}

// to delete any ceratin node
void deleteNode(Node *&head, int position)
{
    // deleting the first node
    if (position == 1)
    {
        Node *temp = head;
        temp->nxt = NULL;
        head = head->nxt;
        head->prev = NULL;
    }
    else
    {
        Node *currentNode = head; // pointer to the node which is gonna be deleted
        Node *prevNode = NULL;    // pointer previous to the current node

        int cnt = 1;
        while (cnt < position)
        {
            prevNode = currentNode;
            currentNode = currentNode->nxt;
            cnt++;
        }

        prevNode->nxt = currentNode->nxt;
        currentNode->nxt->prev = prevNode;
        currentNode->prev = NULL;
        currentNode = NULL;
        delete currentNode;
    }
}

// to print the data
void print(Node *head)
{
    // creating a temporary node to traverse
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nxt;
    }
    cout << endl;
}

// to print the length of the linked list app
int getLength(Node *head)
{
    Node *t = head;
    int count = 0;

    while (t != NULL)
    {
        t = t->nxt;
        count++;
    }
    return count;
}

int main()
{
    Node *Node1 = new Node(15);
    Node *head = Node1;
    Node *tail = Node1;

    print(head);
    cout << "the length of the linked list is " << getLength(head) << endl;

    insertAtHead(head, 6786);
    // print(head);
    // insertLast(head,89);
    // print(head);
    // insertAtHead(head,786);
    // insertLast(head,890);
    inserAtTail(tail, 4);
    // cout<<endl;
    // print(head);
    // insertLast(head,78);
    // insertLast(head,8);
    // insertLast(head,778);
    print(head);
    insertAtPos(head, tail, 899, 3);
    print(head);
    deleteNode(head, 3);
    print(head);
}