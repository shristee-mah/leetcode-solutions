//303. Range Sum Query - Immutable
// Given an integer array nums, handle multiple queries of the following type:
// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right

#include <vector>
using namespace std;

class NumArray {
public:

    // Stores the prefix sums.
    vector<int> prefix;

    // Constructor: build the prefix sum array.
    NumArray(vector<int>& nums) {

        prefix.resize(nums.size());

        // First prefix sum is the first element itself.
        prefix[0] = nums[0];

        // Each prefix sum is the previous prefix sum
        // plus the current element.
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right) {

        // If the range starts from index 0,
        // return the prefix sum directly.
        if (left == 0)
            return prefix[right];

        // Otherwise,
        // Sum(left...right) =
        // Prefix(right) - Prefix(left-1)
        return prefix[right] - prefix[left - 1];
    }
};