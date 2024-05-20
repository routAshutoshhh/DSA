#include<iostream>
using namespace std;

void a(int arr[],int size, int start = 0){ // start is here declared as default argument , default arg is started form right only then we can proceed left wise 
    for (int i = start  ; i < size ; i++) {
        cout<<arr[i]<<endl;
    }
}

int main(){
int arr[]={1,2,3,4};
int size=4;
a(arr,size);
}