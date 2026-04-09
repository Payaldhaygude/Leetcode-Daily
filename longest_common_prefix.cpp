// 🔗 Problem: https://leetcode.com/problems/longest-common-prefix/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Take the first string as the initial prefix.
// 2. Compare it with each string in the array.
// 3. While the current string does not start with the prefix:
//    - Remove the last character from prefix.
// 4. If prefix becomes empty, return "".
// 5. Return the final prefix.
