#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //to check wether queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            arr[rear] = value;
            
        }
        //it means that front is somewhere in the midddle and rear is at the last and hence we gotto push after we move rear 
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature rear was at size-1 and hece it is moved to first porsition
            arr[rear] = value;
        }
        else
        {
            //normal flow
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }

        //lets first take the value of front index and to deque we will have to fill with -1 adn then handle the front according to conditions
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear) { //single element is present
            front = rear = -1;
        }
        //front is sitting at the last end and hence to make it cyclic ,front is moved to 0th index
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }

        else
        {
            //normal flow
            front++;
        }

        return ans;
    }
};