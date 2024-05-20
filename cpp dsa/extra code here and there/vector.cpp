#include<iostream>
#include<vector>

using namespace std ;
 int main(){
    vector<int> v;
    vector<int> a(5,1);//size=5 initialised with 1

    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(6);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"element at 2nd index "<<v.at(2)<<endl;
    cout<<"size of the vector is "<< a.size()<<endl<<"front element "<<a.front()<<endl<<"last element "<<a.back();

    cout<<"vector array before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
           }
           cout<<endl;
    
    v.pop_back();

    cout<<"vector array after pop"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }

    //clearing the vector
    //size gets zero but capacity remains the same 
    v.clear();
    cout<<"capacity "<<v.capacity()<<endl;
    
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    //copying any vector 
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;


 }