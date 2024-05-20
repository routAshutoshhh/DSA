/*  print in increasing format of no:- for n=3
1 2 3
4 5 6
7 8 9

*/



#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int i=1;

int count=1;//take a variable which will gert printed 



while(i<=n){
    
    int j=1;
    while(j<=n){
    
        cout<<count<<" "; //print  the variable 
        count=count+1;// increament the varibale so that to print in increasing format 
        
        j++;
    }
    cout<<endl;
    i++;
}

}