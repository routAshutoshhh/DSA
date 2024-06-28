#include<bits/stdc++.h>
using namespace std;

void subsequence(int index, int  arr[], vector<int> &ans , int size){
    //base case
    if(index == size){
        //print the ans vector 
        for ( auto it : ans){
            cout << it << " ";
        }
        if (ans.size() == 0){
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return ;
    }
    //to insert the element means take the element into subsequence
        ans.push_back(arr[index]);
        subsequence(index+1, arr, ans, size);
        // now we have to pop so that we can isnert the other element
        ans.pop_back();

        //now the case to not take the element in the subsequence
        subsequence(index+1, arr, ans, size);

     
}

int main(){
    int arr[] = {3,1,2};
    vector<int> ans;
    int n =3;
    subsequence(0,arr,ans,n);

    return 0;

}