//find the sum of the array using recursion 
#include<iostream>
using namespace std ;

//function for recursion
int SumArray(int a[],int size){

    //base case 
    if(size==0){
        return 0;
    }
    if ( size ==1){
        return a[0];
    }
 
 int sum = a[0]+SumArray(a+1,size-1);//current element addded with the sum of further elements
 return sum;
}

int main(){
    int arr[] = {2,4,5,9};
    int size  = 4;

    int s = SumArray(arr ,size);
    cout << "Sum is :"<<s<<endl;
}