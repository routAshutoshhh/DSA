#include<iostream>
using namespace std;
//prime no is something that is divisible by 1 and itself ;
int main(){
    int n;
    cin >>n;
    
    int i=2;
    while(i<n){// we will be using going till thart value's edge but not till that value as at that oint i=n hence will be divisible only.
        if (n%i==0){ //if that no is divisibe by the i no that we are incrementing from
           cout<<"prime for "<<i<<endl;//2 to that no (excluding that no)then it is  not prime fo that particular i value else prime for others 
            cout<<"prime for "<<i<<endl;
        }
        else{
            cout<<"not prime for"<<i<<endl;
    
        }
        i++;
    }
}