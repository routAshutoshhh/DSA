#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;

    s.insert(78);
    s.insert(2);
    s.insert(1);
    s.insert(2);

    int n= s.size();

  for(auto i : s){
    cout<<i<<" ";
  }cout<<endl;
  
  set<int>:: iterator i = s.begin();

  cout<<endl;
  cout<< *i << endl;
  s.erase(i);
  for(auto i : s) {
    cout<< i <<endl;
  }

  //checking the element present or not 
  cout<<"2 is present or not "<<s.count(2)<<endl;

//to get an iterator of the searched element
//  set<int>:: iterator itr = s.find(2)<<endl;

 for(auto itr=s.begin(); itr!=s.end() ; ){
    cout<<*itr<<" ";
     itr++;
}
  
}