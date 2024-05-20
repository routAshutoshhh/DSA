/*
print in the format
1
2 3 
3 4 5
*/
#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int row=1;




while(row<=n){
    
    int col=1;
    int count =row;//here the colomn first value(count) will start from the row no only
    
    while(col<=row){
    
        cout<<count<<" ";;
        count=count+1;
        col++;
    }
    cout<<endl;
    row++;
}

}