// 🔗 Problem: LeetCode 709 - To Lower Case
// 🟢 Difficulty: Easy

// 💡 Approach:
// Traverse the string and convert each character to lowercase using the built-in tolower() function.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) {
            c = tolower(c);
        }
        return s;
    }
};
