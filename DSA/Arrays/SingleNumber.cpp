// 136. Single Number
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
#include <vector>
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // Store the XOR of all elements.
        int result = 0;

        // XOR every number in the array.
        for (int num : nums) {

            // Duplicate numbers cancel each other (a ^ a = 0).
            // Only the unique number remains.
            result ^= num;
        }

        // Return the single number.
        return result;
    }
};