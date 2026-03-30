// 🔗 Problem: https://leetcode.com/problems/reverse-integer/
// 🟢 Difficulty: Medium

// 💡 Approach:
// Extract digits one by one using modulo (% 10)
// Build the reversed number using:
// reverse = reverse * 10 + digit
// Remove last digit using division (/ 10)
// Handle overflow before updating reverse number

// ⏱ Time Complexity: O(log n)
// 🧠 Space Complexity: O(1)


