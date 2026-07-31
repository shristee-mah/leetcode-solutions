// 169. Majority Element
// Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include <vector>

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Candidate for majority element.
        int candidate = 0;

        // Count of the current candidate.
        int count = 0;

        // Traverse the array.
        for (int num : nums) {

            // If count becomes 0,
            // choose the current number as the new candidate.
            if (count == 0)
                candidate = num;

            // If current number matches the candidate,
            // increase the count.
            if (num == candidate)
                count++;

            // Otherwise, decrease the count.
            else
                count--;
        }

        // The remaining candidate is the majority element.
        return candidate;
    }
};