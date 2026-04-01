// 🔗 Problem: https://leetcode.com/problems/product-of-array-except-self/
// 🟡 Difficulty: Medium
// 💡 Approach:
// We use prefix (left) and suffix (right) products.
// First pass: store product of all elements to the left
// Second pass: multiply with product of all elements to the right
// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1) (excluding output array)
