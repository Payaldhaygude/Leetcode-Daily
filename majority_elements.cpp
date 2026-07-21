// 🔗 Problem: https://leetcode.com/problems/majority-element/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. For each element, count its occurrences by traversing the entire array.
// 2. Return the element whose frequency is greater than n/2.

// ⏱ Time Complexity: O(n²)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > n / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};
