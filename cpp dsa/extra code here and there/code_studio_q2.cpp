/*You are given an array 'ARR of size 'N' containing each number between  1 and 'N-1 at least once. 
There is a single integer value that is present in the array twice. Your task is to find the duplicate 
integer value present in the array.*/
//code:-
#include<iostream>
using namespace std;

int FINDduplicate(vector<int>&arr)
{

    int ans;

//xor of all array elements 
    for (int i=0;i<arr.size();i++){
        ans=ans^a[i];
    }

//now xoring of 1-[N-1] with the answer 
    for(i=1;i<arr.size();i++){
        ans=ans^i
    }

    return ans;
}

int main(){
    return 0;
}