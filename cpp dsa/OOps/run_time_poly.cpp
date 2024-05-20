#include<iostream>
using namespace std;


    class A{
        public:
        void speak(){
            cout<<"i am A"<<endl;

        }
    };

    class B:public A{
      public:
        void speak(){
            cout<<"i am B"<<endl;
        }
    };

    int main(){
        B boob;
        boob.speak();

}