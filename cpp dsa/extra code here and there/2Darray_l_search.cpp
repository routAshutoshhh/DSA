//linear search in -D ARRAY

#include<iostream>
using namespace std;


//function to check the linear search 
bool isPresent(int a[][4],int x, int row, int col){
for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        if(a[i][j] == x){
            return 1;
        }
    }
}
return 0;
}


int Ind(int a[][4], int target ,int row,int col){
    for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        if(a[i][j] == target){
            cout<<"the index of the elmeent you are searching for is "<<i<<" "<<j<<endl;
        }
    }
}

}


int main(){

//creating an 2-D array 
int arr[3][4];


//taking the input in the array
for(int row = 0; row<3; row++){
    for(int col = 0; col<4; col++ ){
        cin>>arr[row][col];
    }
}

//printing the arrray 
for (int row=0; row<3; row++){
    for(int col=0; col<4; col++){
        cout<<arr[row][col]<<"  ";
    }
    cout<<endl;
    }

cout<<"enter element to search "<<endl;
int target;
cin>>target ;
if(isPresent(arr,target,3,4)){
    cout<<"element found"<<endl;
}
else
cout<<"element missing"<<endl;



cout<< Ind(arr,target,3,4)<<endl;

return 0;

}


