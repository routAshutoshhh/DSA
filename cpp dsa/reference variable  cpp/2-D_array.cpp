#include <iostream>
using namespace std;

int main() {
    cout<<"input the row"<<endl;
    int row;
    cin >> row;
    cout<<"inout the col";
    int col;
    cin >> col;
    cout<<"input the array elements the same form"<<endl;
    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    //sfirst we delete the adjoining array  with the pointer 
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   
//now we delete the pointer array 
    delete []arr;
    cout<<"the memory beeen released"<<endl;

    return 0;
}