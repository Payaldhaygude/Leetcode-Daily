// 🔗 Problem: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// 🟡 Difficulty: Medium
//
// 💡 Approach:
// 1. Traverse the array and record the first occurrence of the target.
// 2. Keep updating the last occurrence whenever the target is found.
//
// ⏱️ Time Complexity: O(n)
// 💾 Space Complexity: O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1, -1};

        for(int i = 0; i < nums.size(); i++) {
            if(target == nums[i]) {
                if(ans[0] == -1) {
                    ans[0] = i;
                }
                ans[1] = i;
            }
        }

        return ans;
    }
};
