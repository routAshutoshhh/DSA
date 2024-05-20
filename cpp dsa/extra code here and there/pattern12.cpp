/*print in the format 
A B C D
A B C D 
A B C D 
A B C D FOR n =4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int row=1;
    
    int col;
    while(row<=n){
        
        col=1;
        while(col<=n){
            char ch= 'A'+col-1;//here value for row remains smae and value according to col is changing only 
            cout<<ch<<" ";
            col++;
        }    
        cout<<endl;
        row++;
    }
    
}