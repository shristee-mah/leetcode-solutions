// Problem: 14. Longest Common Prefix
// Given a list of strings, find the longest common prefix string amongst them.

#include <vector>
#include <string>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     // Check every character of the first string
     for (int i =0; i < strs[0].size(); i++){
        char current = strs[0][i];

        // Compare with all other strings.
        for (int j = 1; j < strs.size(); j++){
            // Stop if a. Current string is shorter, or b. Characters don't match
            if (i>=strs[j].size()|| strs[j][i] != current)
             return strs[0].substr(0,i);  //substr(startIndex, length)
        }
     }
     // Entire first string is the common prefix
     return strs[0];

    }
};