///priotrity queue is always a max  heap and its first 
//element will be the  reatest 


#include<iostream>
#include<queue>
using namespace std;

int main(){

    ///to create the max heap 
    priority_queue<int> maxi;

    //to create min heap
    priority_queue<int ,vector<int>,greater <int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(4);

    cout<<"size if the max heap is "<<maxi.size()<<endl;
    int n = maxi.size();

    for(int i =0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
///similarly for minis
}