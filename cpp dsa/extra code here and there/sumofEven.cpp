#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int n;
    cin>>n;
    
    int i=2;
    
    while(i<=n){
        sum=sum+i;
        i=i+2;
        
    }
    cout <<"the sum is:"<<sum<<endl;
    
}