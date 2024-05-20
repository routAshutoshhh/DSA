#include<iostream>
using namespace std;


//finding the sum of all the elements 

int ArrSum(int a[][4],int row,int col)
{
int sum = 0;
for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
        sum+=a[i][j];
        }
    }
    return sum;
}


//finding sum of all the elements row-wise
int ArrRowSum(int a[][4],int row,int col)
{
cout<<"the sum of the rows of the 2-D array are as follows"<<endl;
for(int i = 0; i<row; i++){
    int RowSum = 0;
    for(int j = 0; j<col; j++){
        RowSum += a[i][j];
        }
        cout<<"The sum of the elements in "<<i<<"row is "<<RowSum<<endl;
    }
    
}

//finding the row  with the largest sum till now 
int largSumRow(int a[][4],int row, int col){

    int maxValue = 0;
    int n = -1;//nth row which has the max value
    int i;
 for(i = 0; i<row; i++){
    int RowSum = 0;
    for(int j = 0; j<col; j++){
        RowSum += a[i][j];
        }
       if(maxValue<RowSum){
        maxValue = RowSum;
        n = i;
       }
    }   
    return n;
}

int main(){
     
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

cout<<"the sum of the total 2-D array is "<<ArrSum(arr,3,4)<<endl;
ArrRowSum(arr,3,4);
cout<<endl;
cout<<"the row with the max value is "<<largSumRow(arr,3,4)<<endl;

}