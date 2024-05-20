#include<iostream>
using namespace std;

void reachedHome(int source , int destination ){

cout<<" source is "<< source <<" the destination is "<< destination<< endl;

    //base case 
    if(source==destination){
        cout<< "i have reached home "<< endl;
        return;
    }

reachedHome(source+1, destination);// recursive call to the same function // step by step increment 

}

int main(){

    int src = 0;
    int dest = 10 ;

    cout <<endl;
    reachedHome(src,dest);
}