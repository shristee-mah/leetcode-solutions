//119. Pascal's Triangle II
// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it.
#include <vector>
class Solution {
public:
    vector<int> getRow(int rowIndex) {

        // Store all rows of Pascal's Triangle.
        vector<vector<int>> triangle;

        // Generate rows from 0 to rowIndex.
        for (int i = 0; i <= rowIndex; i++) {

            // Create the current row with (i + 1) elements.
            // Initialize every element to 1 because
            // the first and last elements are always 1.
            vector<int> row(i + 1, 1);

            // Fill the middle elements of the row.
            // The first (j = 0) and last (j = i) elements
            // remain 1, so we only update the middle.
            for (int j = 1; j < i; j++) {

                // Each middle element is the sum of the
                // two elements directly above it.
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            // Add the completed row to the triangle.
            triangle.push_back(row);
        }

        // Return the requested row.
        return triangle[rowIndex];
    }
};