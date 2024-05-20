/*Problem Statement

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. 
You have to find the intersection of these two arrays.Intersection of two arrays is an array that consists of all the common elements occurring in
both arrays.

Note:

1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original array.
4. If there is no intersection present then return a single integer: '-1' */

//code:-
//approach 1:-
#include<iostream>
using namespace std;

vector<int> findarrrayintersection(vector<int>&arr1, int n,vector<int>&arr2){

    vector<int> ans;

    for(int i=0;i<n;i++){
        int element= arr1[i];

        for( int j=0;j<0;j++){

            if(element < arr2[j]){           // since the array is sorted in order thus if any element greater comes
                break;                    //we need not to map further because its already greater .
            }


            if ( element == arr2[j]){
                arr.push_back(element);
                arr2[j]=-1;
                break;
            }
        }
    }
    return element;
}

int main(){
    return 0;
}