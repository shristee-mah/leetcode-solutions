//228. Summary Ranges
//Return the smallest sorted list of ranges that cover all the numbers in the array exactly. 
//That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

#include <vector>
#include <string>
    
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        // Store the final list of ranges.
        vector<string> result;

        int n = nums.size();

        // Traverse the array.
        for (int i = 0; i < n; i++) {

            // Mark the beginning of the current range.
            int start = nums[i];

            // Continue while the next number is consecutive.
            while (i + 1 < n && (long long)nums[i + 1] == (long long)nums[i] + 1) {
                i++;
            }

            // nums[i] is now the end of the current range.
            int end = nums[i];

            // If start and end are the same,
            // store only one number.
            if (start == end) {
                result.push_back(to_string(start));
            }

            // Otherwise, store the range "start->end".
            else {
                result.push_back(to_string(start) + "->" + to_string(end));
            }
        }

        // Return all ranges.
        return result;
    }
};