// here we gonna do linear search with the help of recursion 
#include<iostream>
using namespace std;

bool elfound(int arr[],int size,int k){
    //base case 
    if (size == 0 ){
        return false;
    }

    if (arr[0]==k){
    return true ;
    }
    else{
        bool remaingPart = elfound(arr+1,size-1,k);
        return remaingPart;
    }

}

int main(){
int arr[] = {2,4,6,7,23};
int size = 5;
int key = 98;

bool ans = elfound(arr,size,key);
if (ans)
cout<<"element found"<<endl;

else{
    cout<<"not found"<<endl;
}

}