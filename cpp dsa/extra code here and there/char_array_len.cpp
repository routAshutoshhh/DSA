//how to find the length of any string 
#include<iostream>
using namespace std;

int count=0;

    void reverse( char name[]){
        int j = name.size()-1;
        for(int j;j<=0;j--){
            cout<<name[j];
        }
    }

    int  getLength(char name[]){
    for(int i = 0 ; name[i] != '\0'; i++){
    count++;
    }
    return count;
    }

int main(){
   char name[20];
    cout<<"enter the name whpse length you want to get :"<<endl;
    cin>>name;
    cout<<"the length of the string " <<getLength(name);
    cout<<"the reverse of the string is "<<reverse(name);
}
