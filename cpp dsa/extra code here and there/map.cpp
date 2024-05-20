#include<iostream>
#include<map>
using namespace std;

int main(){
//ordered map:-
// its complexity will be O(log n ) because its a odered map because its implementation is on red black tree
// where as in unordered map has all methhod complexity as O(1) because its implementation is on hash table 
map<int,string> m;
m[2]= "ashu";
m[13]="loves";
m[1]= "ananta";


m.insert({5,"khoob"});

for (auto i : m){
     cout<<endl<<i.first<<" "<<i.second;
}cout<<endl;

cout<<"finding -13 "<<m.count(13)<<endl;
//erase function 
m.erase({5});
for (auto i : m){
    cout<<i.first<< " "<<i.second<<endl;
}cout<<endl;

//iterator returning important 

auto it = m.find(2);
for(auto i = it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}

}