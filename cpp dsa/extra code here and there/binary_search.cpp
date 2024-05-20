#include<iostream>
using namespace std;

//considering array is sorted(monotonic)

int binarySearch(int array[], int size, int key)
{
    int start = 0;
    int end = size-1;
    
    int mid = start + ((end-start)/2) ;
    
    while(start<= end)
    {
    if (key == array[mid]){
        return mid ;
    }
    //left wala part jao 
    if (key <array[mid] ){
         end= mid-1; // shifting end one index before mid to search in the subarray with new mid
         mid = start + (end-start)/2 ;
    }
    
    //right wala part jao 
         
     if  (key > array[mid] ){
        start = mid+1; //shifting start so to search in the right sub array  
        mid = start + (end-start)/2 ;
        
    }


    
    }
    return -1;  // fi doesnot find the lement index return -1
}



int main(){
    
    int a[]= { 1, 3 , 7 , 9, 900};
     int b[]= {2,4,6,8};
    
    cout<< "the index of the key is "<<binarySearch(a, 5 , 9)<< endl;
     cout<< "the index of the key is "<<binarySearch(b, 5 , 6)<< endl;
    cout<< "if the index shows -1 that means the element does not exist "<< endl;
    
}