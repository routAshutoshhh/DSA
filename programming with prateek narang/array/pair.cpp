// interview question 
/*
given and array of n integers and an no S denoting  a target sum 
find two distinct  integers that can pair upto form target sum, lets assume there will be  onluy one such pair 
*/

/*
so doing the optimal approach first 
in the brute force approach if we intereate using twoo for looops getting at single element and thn interating over all the other elements 
which then forming a pair which is equal to S then it takes O(n2) time to do it 

so we apply optimal approach- sorting and then searching appraoch.
*/

//code for ooptimal approach 
/*
#include<iostream>
using namespace std;

int main(){

}
*/


//more optimal appraoch using unordered set here we use set to solve this problem 

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int Sum){
 vector<int> result ;
 unordered_set<int> s;

 for ( int i = 0;i< arr.size(); i++){
    int x = Sum - arr[i];
    if (s.find(x)!=s.end())//we have reached the last element 
    {
        result.push_back(arr[i]);
        result.push_back(x);
        return result;
    }
    s.insert(arr[i]);//now after checking then inserting the no from the vector into the hash set  
 }


}


int main(){
     vector<int> arr = {10,5,2,3,-6,11};
     int S = 4;

     auto p = pairSum(arr,S);
     if ( p.size() == 0){
        cout<<"there is no element "<<endl;
     }
     else{
        cout<<p[0]<<","<<p[1]<<endl;
     }
     
     return 0;
}





