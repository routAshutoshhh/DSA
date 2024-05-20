#include<iostream>
using namespace std;


void print_no(int a){

    //base case
    if ( a ==0 ){
        return ;// in base case the return statement  is mandatory 
    }

cout << a<<endl;

return print_no(a-1);

}

int main(){

    int n ;
    cout <<"enter the no";
    cin>> n;
    
    print_no(n);
    return 0;
}