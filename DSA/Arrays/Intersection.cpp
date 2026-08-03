// 349. Intersection of Two Arrays
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
#include <vector>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Store all unique elements from nums1 in a hash set.
        // Duplicate values are automatically removed.
        unordered_set<int> s(nums1.begin(), nums1.end());

        // Store the common elements (intersection).
        // Using a set ensures each element appears only once.
        unordered_set<int> ans;

        // Traverse every element in nums2.
        for (int num : nums2) {

            // Check if the current element exists in nums1.
            if (s.count(num))

                // If it exists, insert it into the answer set.
                // Duplicate insertions are ignored automatically.
                ans.insert(num);
        }

        // Convert the answer set into a vector and return it.
        return vector<int>(ans.begin(), ans.end());
    }
};