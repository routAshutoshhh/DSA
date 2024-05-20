#include<iostream>
#include<vector>

using namespace std;

int main(){
    //fill constructor
    vector<int> arr(10,7);

    //2D vector
    vector< vector<int> > arr2 = {
        {2,5,2},
        {23,4,1},
        {7,8,9},
        {11,12}};
    
    for(int i = 0; i< arr2.size(); i++){
        for(int no : arr2[i]){ /// acessing particular elements in the vector row
            cout<< no<<" ,";
        }
        cout<<endl;
    }

    cout<<endl; 

    arr2[0][0] +=10;
    for(int i = 0; i< arr2.size(); i++){
        for(int no : arr2[i]){
            cout<< no<<" ,";
        }
        cout<<endl;
    }



};