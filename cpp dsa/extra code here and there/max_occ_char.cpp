#include<iostream>
using namespace std;

char maxOcc(string str){
int arr[26] = {0};

// array of count 
for(int i = 0;i<str.length();i++){
    char ch = str[i];
    int n = 0;
    if (ch>='a' && ch<='z'){
        n = ch-'a';
    }
    arr[n]++;
} 

//max occuremce of character 
int maxi=-1 ,ans = 0;
for (int i = 0;i < 26;i++){
    if(maxi< arr[i]){
        ans = i;
        maxi = arr[i];
    }
}

int final_ans= 'a'+ans;
return final_ans;
}

int main(){
    string s;
    cin>> s;
    cout<<"the max occuring character is "<<maxOcc(s);
}