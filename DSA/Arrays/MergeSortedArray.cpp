//88. Merge Sorted Array
// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
#include <vector>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Pointer to last valid element in nums1
        int i = m - 1;

        // Pointer to last element in nums2
        int j = n - 1;

        // Pointer to last position of nums1
        int k = m + n - 1;

        // Compare elements from the end
        while (i >= 0 && j >= 0) {

            // Place the larger element at the end
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        // If nums2 still has elements, copy them.
        // (No need to copy remaining nums1 elements because
        // they are already in their correct positions.)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};