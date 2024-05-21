#include<iostream>
#include<stack>
using namespace std ;


int main(){

    string Str = "Ashutosh ";
    stack<char> S;

    for (int i = 0; i< Str.length(); i++){
        char ch = Str[i];
        S.push(ch);

    }

string ans ="";
    //now reversing the string by popping the elements
    while(!S.empty()){
        char c = S.top();
        ans.push_back(c);
        S.pop();

    }
    cout<<"the reversed order is "<<ans<<endl;

}