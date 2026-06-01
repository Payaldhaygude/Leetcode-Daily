// 🔗 Problem: https://leetcode.com/problems/sqrtx/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use the built-in sqrt() function from the C++ Math Library (<cmath>)
// to find the square root of x.

// ⏱ Time Complexity: O(1)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int mySqrt(int x) {
        int result = 0;

        for(int i = 1; i < sizeof(x); i++) {
            result = sqrt(x);
            cout << result;
        }

        return result;
    }
};
