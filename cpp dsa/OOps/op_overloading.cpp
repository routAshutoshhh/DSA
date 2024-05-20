//compile time polymorphism 
//...operator overloading 

#include<iostream>
using namespace std;

class ashu{

    public:
    int a ;
    int b;



    operator+ (ashu &obj){
        int value1 = this->a;// value of a in obj 1 that is associated with the obj
        int value2 = obj.a;//vsvalue  of 1 taken from obj2 
        cout<<"oveloading + operator to subtract and the answer is "<< value1-value2<<endl;
            }
};

int main(){
    ashu obj1,obj2;
    obj1.a=7;
    obj2.a =1;
    obj1+obj2;
}


/* in operator overloading there is an operator which is associated with a obj already and we take the other object as parameter that is 
specified as obj.value and the obj associated with the operator is hence accessed by this !*/