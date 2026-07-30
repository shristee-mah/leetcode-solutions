//108. Convert Sorted Array to Binary Search Tree
// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */
#include <vector>
using namespace std;

class Solution {
public:

    // Function to build BST from nums[left...right]
    TreeNode* buildBST(vector<int>& nums, int left, int right) {

        // Base case:
        // No elements left to construct a subtree.
        if (left > right)
            return nullptr;

        // Choose the middle element as the root.
        int mid = left + (right - left) / 2;

        // Create a node with the middle value.
        TreeNode* root = new TreeNode(nums[mid]);

        // Build the left subtree using the left half.
        root->left = buildBST(nums, left, mid - 1);

        // Build the right subtree using the right half.
        root->right = buildBST(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return buildBST(nums, 0, nums.size() - 1);
    }
};