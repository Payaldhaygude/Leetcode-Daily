// 🔗 Problem: https://leetcode.com/problems/binary-search/
// 🟢 Difficulty: Easy
//
// 💡 Approach:
// Traverse the array and compare each element with the target.
// Return its index if found; otherwise, return -1.
//
// ⏱️ Time Complexity: O(n)
// 📦 Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target)
                return i;
        }

        return -1;
    }
};
