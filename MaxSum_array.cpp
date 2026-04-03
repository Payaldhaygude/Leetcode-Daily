// 🔗 Problem: https://leetcode.com/problems/maximum-subarray/
// 🟢 Difficulty: Easy
// 💡 Approach:
// We use Kadane’s Algorithm.
// - Keep a running sum of the current subarray.
// - If the sum becomes negative, reset it to 0.
// - At each step, update the maximum sum found so far.
// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)
