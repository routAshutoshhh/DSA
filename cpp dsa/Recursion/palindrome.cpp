// using recursion check is it palindrome or not .
#include<iostream>
using namespace std;

void reverse(string &str,int first , int end){
    //base case
    if (first>end)
    return ;

 
 swap(str[first],str[end]);
 first++;
 end--;
 reverse(str,first,end);
 
}

int main (){
    string a = "ananta";
    string b = a;//sotring a string in other varible so that we can compare later on !

    int i = 0;
    int j = a.length()-1;

    reverse(a,i,j); // calling the function to print the reversed string
    cout<<a<<endl;
    if (a==b){
        cout<<"it is palindrome "<<endl;
    }
        else{
            cout<< "it is not a palindrome"<<endl;
        
    }
}