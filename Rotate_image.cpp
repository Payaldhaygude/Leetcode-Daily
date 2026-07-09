// 🔗 Problem: https://leetcode.com/problems/rotate-image/
// 🟡 Difficulty: Medium

// 💡 Approach:
// 1. Transpose the matrix by swapping elements across the main diagonal.
// 2. Reverse each row of the transposed matrix.
// 3. The resulting matrix is rotated 90 degrees clockwise.
//
// ⏱️ Time Complexity: O(n²)
// 💾 Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
