// 🔗 Problem: https://leetcode.com/problems/longest-common-prefix/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Take the first string as the initial prefix.
// 2. Compare it with each string in the array.
// 3. While the current string does not start with the prefix:
//    - Remove the last character from prefix.
// 4. If prefix becomes empty, return "".
// 5. Return the final prefix.

// ⏱ Time Complexity: O(N * M)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);

                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
