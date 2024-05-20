//find the first and last occurence of certain key element. 
#include<iostream>
using namespace std;

int firstOccurence(int  arr[],int n, int key){
    int ans;
    int s= 0;
    int e = n-1;
    int mid =s+ (e-s)/2;

    while (s<= e){
        if( arr[mid] == key){
            ans= mid;
            e = mid-1;
        }
        if( arr[ mid]> key){//right me jao
        s= mid+1;
            
        }
        if( arr[mid]<key){
        e= mid-1;
        }
         mid =s+ (e-s)/2; 

    }
    return ans;
}

int lastOccurence(int  arr[],int n, int key){
    int ans;
    int s= 0;
    int e = n-1;
    int mid =s+ (e-s)/2;

    while (s<= e){
        if( arr[mid] == key){
            ans= mid;
            s = mid+1;
        }
        if( key<arr[mid]){//right me jao
        e=mid-1;
            
        }
        if( key>arr[mid]){
        s=mid+1;
        }
         mid =s+ (e-s)/2; 

    }
    return ans;
}

int main(){
    int a[6]={1,2,3,3,3,6};

    cout<<"the first occurence of the key value is "<< firstOccurence(a,5,3);
    cout<<endl;
     cout<<"the last occurence of the key value is "<< lastOccurence(a,5,3);

}