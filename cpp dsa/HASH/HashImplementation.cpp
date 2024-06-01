#include<bits/stdc++.h>
using namespace std;;

int main(){
    int size ;
    cin>>size;
    int arr[size];
    //array input 
    cout<<"the input array is"<<endl;
    for ( int i = 0; i<size; i++){
        cin>>arr[i];
    }

    //creating hash array and doing precompute in the hash array 
    int hashArray[13] ={0};
    for ( int i = 0; i<size ; i++){
        hashArray[arr[i]] +=1;
    }

    //to see the hash array
    cout <<"the hash array is "<<endl; 
    for ( int i= 0; i<13; i++){
        cout <<hashArray[i]<<" ";
    }
    cout<<endl;

    //query running for  frequency of each element of the main array 
    int q;
    cin>>q;//taking no queiries 
    while(q--){
        int qureyNO ;//no's whose frequency is to be fetched 
        cin >>qureyNO;
        cout<<"frequency of the " <<qureyNO <<"is"<<" "<<hashArray[qureyNO]<<endl;


    } 

return 0;

}