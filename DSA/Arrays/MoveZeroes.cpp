//283. Move Zeroes
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Position where the next non-zero element should be placed.
        int k = 0;

        // Move all non-zero elements to the front.
        for (int i = 0; i < nums.size(); i++) {

            // If the current element is non-zero,
            // place it at index k.
            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }

        // Fill the remaining positions with zeros.
        while (k < nums.size()) {
            nums[k] = 0;
            k++;
        }
    }
};