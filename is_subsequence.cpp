// 🔗 Problem: https://leetcode.com/problems/is-subsequence/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use two pointers to traverse both strings.
// Move the pointer of s only when characters match.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;

        for (int j = 0; i < s.size() && j < t.size(); j++) {
            if (s[i] == t[j]) {
                i++;
            }
        }

        return i == s.size();
    }
};
