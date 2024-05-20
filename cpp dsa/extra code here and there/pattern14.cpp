/*
A B C 
D E F 
G H I
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<ch;//dont do here ch+1 it wiLl implicitly  type convert the char to int 
          ch=ch+1;//insted increament here so no type conversion here 
          
          col++;
        }
        
        cout<<endl;
        row++;
    }
}