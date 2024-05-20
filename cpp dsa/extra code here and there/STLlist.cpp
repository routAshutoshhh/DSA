#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;
    l.push_back(23);
    l.push_back(24);

    //printing the lsit
    for(int i:l){
 cout<<i<<" ";//prints 23 24
    }
    cout<<endl;
    
  //erase function 
  l.erase(l.begin());
  //recheck 
  for(int i:l){
 cout<<i<<" ";//prints nothing 
    }

    
}