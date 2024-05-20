//code-studio question-love babbar:-
/*You have been given an integer array/list(ARR) of size N. Where N is equal to [2M 11].
Now, in the given arraylist, 'M' numbers are present twice and one number is present only once
You need to find and return that number which is unique in the array/list..

Note:
Unique element is always present in the arrayList according to the given
condition.
*/

//code:-
#include<iostream>
using namespace std;


//unique element code 
int UNIQUEelement(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
   return ans;

}

int main(){
    int a[]={6,6,2,700007,2};
    cout<<"The unique elememt is "<<endl;
    cout<<UNIQUEelement(a,5)<<endl;
}