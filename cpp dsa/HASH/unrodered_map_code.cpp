#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int n ;
    cin>>n;
    int arr[n];
    //for input of the array
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    ///precompute and use of hash map
    unordered_map<int , int>mpp;
    for ( int i = 0; i<n; i++){
        mpp[arr[i]]++;//incereasing because its frequncy adn hence of every elment in the map the frequncy of that particular elment willl increase
    }
    

    //to print out the element in the array 
    for (int i = 0 ;i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout<<endl;

    //to print the map
    //and this is how we iterate through map
    for (auto i: mpp ){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    //get the frequncy of the asked element
    int q;
    cin >>q;
    while(q--){
        int number ;
        cout <<"enter the element "<<endl;
        cin >> number;
        cout <<"the frequncy  of this element is "<<mpp[number]<<endl;

    }
    return 0;
}