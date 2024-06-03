#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin>> s;


    //hash array for characters storing 
    int hash[26] ={0};
    for (int i = 0; i<s.size(); i++){
        int index = s[i]-'a';
        hash[index] += 1; 
    }

    //printing the hash array 
    cout <<"the hash array is "<<endl; 
    for ( int i= 0; i<26; i++){
        cout << hash[i]<<" ";
    }
    cout<<endl;

    //frequency checking with queries 
    int q;
    cin>>q;
    while (q--){
        char ch;
        cout <<"enter the qery alphabet "<<endl;
        cin>>ch;
        int index = ch -'a';
        cout<<hash[index]<<endl;
    }
}