// 🔗 Problem: LeetCode 231 - Power of Two
// 🟢 Difficulty: Easy

// 💡 Approach:
// Check whether n can be represented as 2 raised to some power.
// Start from i = 0 and keep calculating 2^i using pow().
// If any value equals n, return true.
// If 2^i becomes greater than n, return false.

// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        int i = 0;

        while (pow(2, i) <= n) {
            int result = pow(2, i);

            if (result == n) return true;

            i++;
        }

        return false;
    }
};
