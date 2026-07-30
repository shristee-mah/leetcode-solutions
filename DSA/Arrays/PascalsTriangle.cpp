//118. Pascal's Triangle
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it.
#include <vector>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        // Store the entire Pascal's Triangle
        vector<vector<int>> triangle;

        // Generate each row
        for (int i = 0; i < numRows; i++) {

            // Create a row with (i+1) elements initialized to 1
            vector<int> row(i + 1, 1);

            // Fill the middle elements
            for (int j = 1; j < i; j++) {

                // Current value = upper-left + upper-right
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Add this row to the triangle
            triangle.push_back(row);
        }

        return triangle;
    }
};