// 🔗 Problem: https://leetcode.com/problems/valid-anagram/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Sort both strings and compare them.
// If the sorted strings are identical, they are anagrams;
// otherwise, they are not.

// ⏱ Time Complexity: O(n log n)
// 🧠 Space Complexity: O(1)  // Ignoring sorting space used by the library

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
