/*--------------------------------------------------------------------------------------------------------------------------------------
Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1
----------------------------------------------------------------------------------------------------------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> a;
        int k=0;
        for(int i=0 ; i<n ; i++){
            
            for(int j=0 ; j<n ; j++){
                int c=0;
                if((i!=j)&&(arr[i]==arr[j])){
                    for(int x : a){
                        if(x==arr[i]){
                            c++;
                            break;
                        }
                    }
                    if(c==0){
                        a.push_back(arr[i]);
                        k++;
                    }
                }
                
            }
        }
        
        if(k==0){
            a.push_back(-1);
            return a;
        }
        
        sort(a.begin() , a.end());
        return a;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}