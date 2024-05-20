//find  the power of a(a is the base here and b is the exponent)

#include<iostream>
using namespace std;

int power(int base, int exponent){
    //base case 
    if ( exponent==0){
        return 1;
    }
    if (exponent==1){
        return base;
    }

    //recursive call 
    int ans = power(base,exponent/2);

    //processing
    if (exponent%2 == 0){
        return ans*ans;
    }
    else{
        return (base*ans*ans);
    }


}

int main (){
    int a ;//base
    int b ;//exponent
    cout <<"enter the base value "<<endl;
    cin >> a;
    cout<<"enter the exponent value "<<endl;
    cin>> b;
    cout <<"base to the power of exponent here is "<<power(a,b);

}

