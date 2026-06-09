// 🔗 Problem: https://leetcode.com/problems/length-of-last-word/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Start from the end of the string.
// Skip trailing spaces.
// Count characters until a space or the beginning of the string is reached.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.size() - 1;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
