///reverse a string using recursion 
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
    int i = 0;
    int j = a.length()-1;

    reverse(a,i,j); // calling the function to print the reversed string
    cout<<a<<endl;
}