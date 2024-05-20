#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int a=0;
  int b=1;
 cout<<a<< " "<<b<<" ";
 for (int i=0;i<=n;i++){
    int fibNUM= a+b;
    cout<<fibNUM<<" ";
    
    a=b;
    b=fibNUM;
    
 }


}