#include<iostream>
using  namespace std;

void update( int *p){
    // p = p +1;// pointer value upated here will have no effect in the main function 
    // cout << "update in function " << p << endl;
    cout<<"uPDATING THE VALUE "<<endl;
    *p = *p+1;// updating value in this function only which gets reflected in the main function 
}

int main(){
    int v = 5;
    int *p = &v;
    cout<< "before " << p <<endl;
    cout<<"value before update "<<v<<endl;
    update(p);
    cout<< "after update in function "<< p <<endl;
    cout<<"value after update "<< *p <<endl;
    
     
}