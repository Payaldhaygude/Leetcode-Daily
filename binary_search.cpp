// 🔗 Problem: https://leetcode.com/problems/binary-search/
// 🟢 Difficulty: Easy
//
// 💡 Approach (Linear Search):
// 1. Traverse the array from the beginning.
// 2. Compare each element with the target.
// 3. If the target is found, return its index.
// 4. If the loop ends without finding the target, return -1.
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
