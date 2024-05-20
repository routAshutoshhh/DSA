//print in the form :-
// 1234
// 1234
// 1234
// 1234

//so in here we have to the increasing coloumns instead of rows o for that we can print the j variable only.

#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;//instead of printng constant row wwe will print the increasing coloumn 
        j++;
    }
    cout<<endl;
    i++;
}

}