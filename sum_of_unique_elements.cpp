// 🔗 Problem: https://leetcode.com/problems/sum-of-unique-elements/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Traverse each element in the array.
// For every element, count how many times it appears using another loop.
// If the element appears exactly once, add it to the sum.
// Finally, return the sum of all unique elements.

// ⏱ Time Complexity: O(n²)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count == 1) {
                sum += nums[i];
            }
        }

        return sum;
    }
};
