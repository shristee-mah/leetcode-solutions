// 217. Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.

#include <vector>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (int num : nums) {

            // If the number already exists in the set,
            // a duplicate has been found.
            if (seen.count(num))
                return true;

            // Otherwise, store the number.
            seen.insert(num);
        }

        // No duplicates found.
        return false;
    }
};