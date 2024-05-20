
/*print in the format
A A A
B B B
C C C
FOR n=3
*/

#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int row=1;



while(row<=n){
    
    int col=1;
   
    
    while(col<=n){
        char ch='A'+row-1;//typecasting 
        cout<<ch<<" ";
        col++;
    }
    cout<<endl;
    row++;
}

}