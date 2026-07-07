// 🔗 Problem: https://leetcode.com/problems/sort-colors/
// 🟠 Difficulty: Medium

// 💡 Approach:
// 1. Use the built-in sort() function to sort the array in ascending order.
// 2. Since the array contains only 0s, 1s, and 2s, sorting automatically arranges the colors correctly.

// ⏱ Time Complexity: O(n log n)
// 🧠 Space Complexity: O(log n) (depends on the STL sort implementation)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};
