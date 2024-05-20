#include <iostream>
using namespace std;

int binary_search(int arr[] , int n , int key){
    int s = 0 , e = n-1 , m = (s+e)/2;

    while(s <= e){
        if(arr[m] == key){
            return(m);
        }

        else if(arr[m] < key){
            s = m+1;
        }

        else{
            e = m-1;
        }

        m = (s+e)/2;
    }

    return -1;
}

int main(){
    int size , key;
    cout<<("enter size of array : ");
    cin>>size;

    int arr[size];
    cout<<"\nenter your array : ";
    for(int i=0 ; i<size ; i++)
    cin>>arr[i];

    cout<<"\nenter value of element to be searched in array : ";
    cin>>key;

    int result = binary_search(arr , size , key);

    if(result == -1)
        cout<<"\nelement not found";

    else
        cout<<"\nelement found at "<<result<<" location";

    return 0;
}