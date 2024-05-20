/* print 
 1
 2 3
 4 5 6
 7 8 9 10
 for n=4
 */



#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int row=1;
int count =row;//the count will also start from 1 only 



while(row<=n){
    
    int col=1;
    
    while(col<=row){
    
        cout<<count<<" "; //taking a coiunt variable to increment and orint instead of porinting the row
        count=count+1;
        col++;
    }
    cout<<endl;
    row++;
}

}