#include<stack>
#include<vector>
int removeDuplicates(vector<int> &arr, int n) {
	stack<int> s;
	s.push(arr[n-1]);

	for(int i = n-2;i>=0; i--){
		if ( s.top() != arr[i])  {
			s.push(arr[i]);
		}
     }
//to resize the array
	arr.resize(0);
    //funttion to filll the vector array with a particular value 
    //fill(arr.begin(), arr.end , value);

	while (!s.empty()){
		int value = s.top();
		arr.push_back(value);
		s.pop();
	}

	return arr.size();
	
}