#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int leastValue(vector<int> &arr,int size){
    sort(arr.begin(),arr.end());

    for(int i = 0; i<size; i++){
        int value = arr[i];
        if(++value == arr[i++]){
            i++;
            cout<<"run hua"<<endl;
        }
        else{
            value = value++;
            return value++;
        }
    }
}

int main(){
    cout<<"enter the size"<<endl;
    int n;
    cin>>n;
    vector<int> arr;

    for( int i = 0;i< n;i++){
        int value= 0;
        cout<<"insert the value "<<endl;
        cin>>value;
        arr.push_back(value);
    }

    int vm = leastValue(arr,n);
    cout<<"the least value that could be here is "<<vm<<endl;
}