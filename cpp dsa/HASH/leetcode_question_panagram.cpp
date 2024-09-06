/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 
*/



class Solution {
public:
    bool checkIfPangram(string sentence) {
        char hash[26] = {0}; // Hash array to store the frequency of each letter

        // Populate the hash array with frequencies of characters
        for (int i = 0; i < sentence.length(); i++) {
            char ch = sentence[i];
            int index = ch - 'a'; // Find the index based on ASCII value
            hash[index] += 1;
        }

        // Check if all 26 letters are present at least once
        for (int i = 0; i < 26; i++) {
            if (hash[i] == 0) { // If any letter is missing
                return false;
            }
        }
        return true;
    }
};
