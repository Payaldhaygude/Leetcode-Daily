// 🔗 Problem: LeetCode 50 - Pow(x, n)
// 🟡 Difficulty: Medium

// 💡 Approach:
// Use the built-in pow() function to calculate x raised to the power n.

// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    double myPow(double x, int n) {
        int i;
        for(i = 0; i < 100; i++) {
            pow(x, n);
        }

        return pow(x, n);
    }
};
