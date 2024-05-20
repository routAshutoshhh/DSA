//print in the format 
/*
*
**
***
for n=3
*/

//in this code we will print the * in the colomn ,exactly about its row no ie for row 1 the * will be printed 1 times and for row 2
// the * will be printed 2 times in coloumns 

#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int row=1;




while(row<=n){
    
    int col=1;
    
    while(col<=row){
    
        cout<<"*";

        col++;
    }
    cout<<endl;
    row++;
}

}