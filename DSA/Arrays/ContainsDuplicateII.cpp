// 219. Contains Duplicate II
// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // Store each number and its most recent index.
        unordered_map<int, int> lastIndex;

        // Traverse the array.
        for (int i = 0; i < nums.size(); i++) {

            // If the previous number has been seen before. 
            if (lastIndex.count(nums[i])) {
                //the previous index where the same number was seen.
                // Check if the distance between indices
                // is less than or equal to k.
                if (i - lastIndex[nums[i]] <= k)
                    return true;
            }

            // Update the latest index of the current number.
            lastIndex[nums[i]] = i;
        }

        // No nearby duplicate found.
        return false;
    }
};