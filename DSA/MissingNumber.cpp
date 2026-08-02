//268. Missing Number
// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <vector>

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int count = 0;

        // Check every number from 0 to n.
        for (int i = 0; i <= nums.size(); i++) {

            // Search for i in the array.
            for (int j = 0; j < nums.size(); j++) {

                if (i == nums[j])
                    count++;
            }

            // If i was not found, it is the missing number.
            if (count == 0)
                return i;

            // Reset count for the next number.
            count = 0;
        }

        return 0;
    }
};