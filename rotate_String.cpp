// 🔗 Problem: https://leetcode.com/problems/rotate-string/
// 🟢 Difficulty: Easy
//
// 💡 Approach:
// 1. If the lengths are different, rotation is impossible.
// 2. Concatenate the string with itself (s + s).
// 3. If goal is a substring of (s + s), then goal is a valid rotation of s.
//
// ⏱️ Time Complexity: O(n)
// 📦 Space Complexity: O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        return s.length() == goal.length() &&
               (s + s).find(goal) != string::npos;
    }
};
