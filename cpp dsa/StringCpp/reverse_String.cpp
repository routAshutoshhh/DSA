/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.


Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
*/

//Approach1  using stacks

class Solution {
public:
    string reverseWords(string s) {
        // making a empty answer string
        string ans = " ";
        // making a stack to push into after the space and then we will pop
        stack<string> st;
        string temp = " ";
        //pushing into the stack 
        for(int i = 0; i< s.size()-1; i++){           
            while(s[i] != ' '){
                temp+=s[i];
            }
            st.push(temp);
            st.push(" ");
            temp=" ";
        }
        //now poppping 
    while (!st.empty() ){
            string t =st.top();
            st.pop();
            ans+=t;
        }
        return ans;
    }
};


//approach 2 optimised approach 
//this is the code with optimal solutions so that 
class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length()-1;

    // to store the word 
        string  temp = "";
    //to store the ans;
        string  ans = "";
    //iterating through out the string to add it into the amns
        while( left <= right ){
            char ch = s[left];
            if ( ch !=' '){
                temp+=ch;
            }else if (ch == ' '){
                //when encountering any word other then the first word 
                if(ans != "") ans = temp+" "+ans;
                //when encountering the first word
                else ans = temp ;
                //makiing the left empty 
                temp ="";
            }
            left++;
        }
        //encountering the last word

        if( temp  != ""){
            if ( ans!= "") ans =temp+" "+ans;
            else ans = temp ;
        }
        return ans;
    }
};