#include<iostream>
using namespace std;

void swapALTER(int a[],int size){
    for(int i=0;i<=5;i++){
        swap(a[i],a[i+1]);
        i++;
    }
}

void PRINTarray(int a[],int n){
    for(int i=0;i<=n;i++){
    cout<<a[i]<<endl;
    }
}


 
int main(){
    int arr[6]={2,5,7,44,78,0};
    swapALTER(arr,5);
    PRINTarray(arr,5);
}