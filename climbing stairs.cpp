// 🔗 Problem: https://leetcode.com/problems/climbing-stairs/
// 🟢 Difficulty: Easy

// 💡 Approach:
// The number of ways to reach the current step is the sum of the ways to reach the previous two steps.
// Use two variables to iteratively compute the Fibonacci sequence up to n.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        int first = 1;
        int second = 2;

        for (int i = 3; i <= n; i++) {
            int current = first + second;
            first = second;
            second = current;
        }

        return second;
    }
};
