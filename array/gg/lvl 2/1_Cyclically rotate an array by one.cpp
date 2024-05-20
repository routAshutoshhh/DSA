/*Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4*/

#include <iostream>
using namespace std;
void rotate(int arr[], int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}

// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    int temp1=arr[0] ;
    for(int i=0 ; i<n-1 ; i++){
            int temp2 = arr[i+1];
            arr[i+1] = temp1;
            temp1 = temp2 ;
    }
    arr[0]=temp1;
    
}