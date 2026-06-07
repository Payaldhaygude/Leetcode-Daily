// 🔗 Problem: https://leetcode.com/problems/adding-spaces-to-a-string/
// 🟢 Difficulty: Medium

// 💡 Approach:
// Insert spaces at the given indices while adjusting positions using an offset.

// ⏱ Time Complexity: O(n * k)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int offset = 0;

        for (int i = 0; i < spaces.size(); i++) {
            s.insert(spaces[i] + offset, " ");
            offset++;
        }

        return s;
    }
};
