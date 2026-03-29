// 🔗 Problem: https://leetcode.com/problems/search-insert-position/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use Binary Search since the array is sorted.
// If target is found → return index
// Else return the position where it should be inserted

// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};
