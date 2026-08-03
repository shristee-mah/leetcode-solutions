//350. Intersection of Two Arrays II
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
#include <vector>       
#include <unordered_map>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // Store the frequency of each element in nums1.
        unordered_map<int, int> freq;

        // Count how many times each number appears.
        for (int num : nums1) {
            freq[num]++;
        }

        // Store the intersection.
        vector<int> result;

        // Traverse nums2.
        for (int num : nums2) {

            // If the number exists in the map
            // and its count is greater than 0.
            if (freq[num] > 0) {

                // Add it to the result.
                result.push_back(num);

                // Decrease its remaining frequency.
                freq[num]--;
            }
        }

        return result;
    }
};