// 🔗 Problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
// 🟡 Difficulty: Medium
//
// 💡 Approach:
// 1. Traverse the rotated array from left to right.
// 2. If the target is found, return its index; otherwise, return -1.
//
// ⏱️ Time Complexity: O(n)
// 💾 Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            if(target == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};
