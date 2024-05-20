#include<iostream>
using namespace std;

void  reverse(int arr[],int n){
    int start=0;
    int end=n-1;

while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
 }
 
}

void printARRAY(int arr[],int n){

    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}

int main(){
     
int arr[6]={3,4,1,78,8,0};
int arr2[5]={2,78,90,1,0};

reverse(arr,6);
reverse(arr2,5);

printARRAY(arr,6);
cout<<" "<<endl;
printARRAY(arr2,5);

}