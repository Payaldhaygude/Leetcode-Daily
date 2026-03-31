// 🔗 Problem: https://leetcode.com/problems/contains-duplicate/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Sort the array first.
// Then check adjacent elements.
// If any two consecutive elements are equal → duplicate exists.

// ⏱ Time Complexity: O(n log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        for (int j = 0; j < nums.size() - 1; j++) {
            if (nums[j] == nums[j + 1]) {
                return true;
            }
        }

        return false;
    }
};
