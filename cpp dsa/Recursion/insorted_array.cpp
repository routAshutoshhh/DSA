#include<iostream>
using namespace std;

bool insort( int a[], int size){
    //base case
    if ( size == 0|| size==1)
    return true ;

    if (a[0]>a[1]){ // n ew array index updated
    return false ;
    }
    else{
        bool remainingpart = insort(a+1,size-1);//oushing the array in new with new index and size 
                return remainingpart;
    }
}

int main(){
    int arr[] = {2,4,5,6,8,1};
    int size = 6;
    bool ans=insort(arr,size);

    if (ans ){
        cout<<"array is sorted "<<endl;
    }
    else
    cout<<"not sorted"<<endl;
}