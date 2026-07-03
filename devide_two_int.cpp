// 🔗 Problem: LeetCode 29 - Divide Two Integers
// 🟡 Difficulty: Medium

// 💡 Approach:
// Handle the overflow case when INT_MIN is divided by -1.
// Otherwise, return the quotient using the division operator.

// ⏱ Time Complexity: O(1)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        return dividend / divisor;
    }
};
