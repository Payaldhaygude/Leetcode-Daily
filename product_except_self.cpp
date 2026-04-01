// 🔗 Problem: https://leetcode.com/problems/product-of-array-except-self/
// 🟡 Difficulty: Medium

// 💡 Approach:
// We use prefix (left) and suffix (right) products.
// First pass: store product of all elements to the left
// Second pass: multiply with product of all elements to the right

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1) (excluding output array)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        int left = 1;
        for(int i = 0; i < n; i++) {
            result[i] = left;
            left *= nums[i];
        }

        int right = 1;
        for(int i = n - 1; i >= 0; i--) {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
