// 🔗 Problem: LeetCode 326 - Power of Three
// 🟢 Difficulty: Easy
//
// 💡 Approach:
// Check powers of 3 using pow(3, i) until the value exceeds n.
//
// ⏱ Time Complexity: O(log₃ n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;

        int i = 0;
        while (pow(3, i) <= n) {
            if (pow(3, i) == n) return true;
            i++;
        }

        return false;
    }
};
