// 🔗 Problem: https://leetcode.com/problems/valid-palindrome/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Clean the string (lowercase + alphanumeric only),
// reverse it, and compare with the original cleaned string.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(n)

class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";

        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        string original = cleaned;
        reverse(cleaned.begin(), cleaned.end());

        return original == cleaned;
    }
};
