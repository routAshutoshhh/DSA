/*print
1
2 2
3 3 3
4 4 4 4
for n=4
so we will be printing the row in col only 
*/



#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;

int row=1;




while(row<=n){
    
    int col=1;
    
    while(col<=row){
    
        cout<<row;

        col++;
    }
    cout<<endl;
    row++;
}

}