// 🔗 Problem: LeetCode 342 - Power of Four
// 🟢 Difficulty: Easy

// 💡 Approach:
// Check every power of 4 using pow() until it exceeds n.
// If any power equals n, return true.

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
