// 🔗 Problem: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Take each number from the array.
// 2. Count its digits using /10.
// 3. Check if the number of digits is even.
// 4. If even, increase the count.

// ⏱ Time Complexity: O(n * d)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int digits = 0;

            while(n > 0) {
                n = n / 10;
                digits++;
            }

            if(digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
