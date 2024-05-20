/*-----------------------------------------------------------------------------------------------------------------------------------------------
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.


Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
-------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int c=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if((i!=j)&&((arr[i]+arr[j])==k))
                c++;
            }
        }
        return c/2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}