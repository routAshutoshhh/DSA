#include<iostream>
using namespace std;

class heap{
    public :
    int arr[100];
    int size; //initial size is 0;

    //creating a constructor 
    heap(){
        arr[0] =-1;
        size = 0;
    }

    //function  for the class for insertion of the  elemets 
    void insert ( int val ){
        int elementToInsert  = val ;
        size = size+1 ; // increasing the size of the  heap to add more elements
        int index = size; // adding the element in the  last means  , last index would be assignned ot the inserting elemment 
        arr[index] = elementToInsert;
        

        //insertion comparison will onl y happen if there is already a element or the root
        while(index > 1){
            int parent  = index/2; // finding the  parent of the inserted element so that we can compare it 

            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent ; //updating the index of the inserted element if in the max heap the inserted  child element is biggger than the root element

            }else{
                return ;
            }
        }
    }

    void print(){
        for(int i = 1; i <=  size ; i++){
            cout << arr[i] << " ";
        }
    }

};

 int main(){

    heap h ;
    h.insert(50);
    h.insert(55);   
    h.insert(53);
    h.insert(52);
     h.print();
    

    return 0;

 }