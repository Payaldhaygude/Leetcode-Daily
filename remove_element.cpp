// 🔗 Problem: https://leetcode.com/problems/remove-element/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use two-pointer technique.
// One pointer (j) scans the array.
// Another pointer (i) keeps track of position for valid elements.
// If nums[j] != val, copy nums[j] to nums[i] and increment i.
// Skip elements equal to val.
// This modifies the array in-place.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
