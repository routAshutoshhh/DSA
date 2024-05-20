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
//approach 2(optimised):-

#include<iostream>
#include<vector>
using namespace std;

vector<int> findarrrayintersection(vector<int>&arr1, int n ,vector<int>&arr2){
    int i=0,int j=0;  
    vector<int> ans;

while(arr1[i]==n && arr2[j]==m){

    //case 1
    if (arr1[i]<arr2[j]){// if the second array elmmt is greater than 1 st array so no need to compare
        i++;           // as other elements will be any greater , so move to the next element in  the 1st array.
        
    }
//case 2 (normal case )
    else if (arr1[i]>arr2[j])
    {
        j++; //if the elemnet  in  the first array is greater than the mapped element in the second array we will increment in the 2nd array .
    }
//case 3 (matching case)
else(arr1[i]==arr2[j]){
    ans.push_back(arr1[i]);
    i++;
    J++;
}

}
      
}

int  main(){
vector<int> a1[4]={1,3,6,8};
vector<int> a2[4]={4,6,8,9};
    cout<<"the elemnets are"<<findarrrayintersection(a1,4,a2);
    return 0;
}