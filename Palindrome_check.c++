// 🔗 Problem: https://leetcode.com/problems/palindrome-number/
// 🟢 Difficulty: Easy
// 💡 Approach:
// Reverse the number and compare with original

// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long reversed = 0;

        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        return original == reversed;
    }
};
