// 🔗 Problem: https://leetcode.com/problems/move-zeroes/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Maintain a pointer (j) for the next position of a non-zero element.
// 2. Traverse the array.
// 3. Whenever a non-zero element is found, swap it with nums[j].
// 4. Increment j after every successful swap.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
