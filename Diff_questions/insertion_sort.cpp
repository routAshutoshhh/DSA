#include<btis/stdc++.h>
using namespace std;

void funcName(int n , vector<int> &arr){
    for(int i  = 1; i< n; i++){
        int j = i-1;
        int temp =a[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = temp;
    }
}

int main(){
    return 0;
}