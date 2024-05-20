#include<iostream>
#include<climits>
using namespace std;
//giving maximum value from the array 
 int getMAX(int num[],int n) //n will take the size 
{    
int max = INT_MIN ;

for(int i=0;i<n;i++){
 if(num[i]>max){
 max=num[i];
 }
}
return max;
}

// giving minimum value form the array
int getMIN(int num[],int n) //n will take the size 
{    
int min = INT_MAX ;

for(int i=0;i<n;i++){
 if(num[i]<min){
 min=num[i];
 }
}
return min;
}

int main(){
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
    
    int num[100];
    
    for (int i;i<size;i++){
        cout<<"enter the elements"<<endl;
        cin>>num[i];

    }

    cout<<"the max value we can get is "<<getMAX(num,size)<<endl;
    cout<<"the minimumm value we can get is "<<getMIN(num,size);
}

