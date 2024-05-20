#include<iostream>
using namespace std;


int linearSearch(int a[],int n,int key){
  for (int i = 0; i<n-1; i++)
     {
         if(a[i]==key){
            return i;
         }
         else{
            return -1;
         }
     }
}
int main(){
int arr[]={1,2,3,4,588,5,46,8};
int n = sizeof(arr);
cout<< linearSearch(arr,8,588);
return 0;
}