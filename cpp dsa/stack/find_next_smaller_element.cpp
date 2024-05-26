#include<iostream>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
//lets try solving it using array 

    vector<int> ans;
    for( int i = 0; i<arr.size(); i++){
        for( int j = i+1; j <arr.size() ;j++){
            if (arr[i]>arr[j]){
                ans.push_back(arr[j]);
                break;
            }
        }
        ans.push_back(-1);
    }
    return ans;

}

int main(){

    vector<int> arr = {2,1,4,3};
    int n = arr.size();
    vector<int> ans = nextSmallerElement(arr,n);
    cout << ans << endl;

}