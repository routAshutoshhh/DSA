//implementing bubble sort using recursion
#include<iostream>
using namespace std ;

void bubbleSort(int arr, int n) { 
    //base case
    if (n==0||n==1)
    return ;

    //solving one case only 
    for (int i = 0;i<n-1;i++){
        if ( arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call 
    bubbleSort(arr,n-1);
}

int main(){
    int arr[]={2,1,7,2,5,4};
    bubbleSort(arr, 6);
    cout<<arr<<endl;
}