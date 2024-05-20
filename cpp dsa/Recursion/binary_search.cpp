//implementing binary search using recursion 
#include<iostream>
using namespace std;

bool elfound(int *a , int k,int s, int e ){
    //base case
    if (s>e){
        return false ;
    }
    

    //preprocessing 
    int mid  = s+(e-s)/2;

    if ( a[mid] == k){
        return true ;
    }
    else if (a[mid]<k){
        return elfound( a,k,mid+1,e );
    }
    else{
        return elfound( a,k,s,mid-1 );
    }
}

int main(){
int arr[] = {2,4,6,7,23};
int size = 5;
int key = 90;
int start = arr[0];
int end  = arr[size-1];


bool ans = elfound(arr,key,start,end);
if (ans)
cout<<"element found"<<endl;

else{
    cout<<"not found"<<endl;
}

}