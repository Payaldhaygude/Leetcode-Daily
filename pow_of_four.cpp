// 🔗 Problem: LeetCode 342 - Power of Four
// 🟢 Difficulty: Easy

// 💡 Approach:
// Start with i = 0 and keep calculating 4^i using pow().
// If any power equals n, return true.
// Stop when 4^i becomes greater than n.

// ⏱ Time Complexity: O(log₄ n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) return false;

        int i = 0;

        while (pow(4, i) <= n) {
            if (pow(4, i) == n) {
                return true;
            }
            i++;
        }

        return false;
    }
};
