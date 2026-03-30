// 🔗 Problem: https://leetcode.com/problems/reverse-integer/
// 🟢 Difficulty: Medium

// 💡 Approach:
// Extract digits one by one using modulo (% 10)
// Build the reversed number using:
// reverse = reverse * 10 + digit
// Remove last digit using division (/ 10)


// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int reverse(int n) {
        int digit;
        int reverse_num = 0;

        while (n != 0) {
            digit = n % 10;

            // Handle overflow
            if (reverse_num > INT_MAX / 10 || reverse_num < INT_MIN / 10)
                return 0;

            reverse_num = reverse_num * 10 + digit;
            n = n / 10;
        }

        return reverse_num;
    }
};


