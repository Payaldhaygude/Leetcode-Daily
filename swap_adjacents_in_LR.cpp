// 🔗 Problem: LeetCode 777 - Swap Adjacent in LR String
// 🟡 Difficulty: Medium

// 💡 Approach:
// Use two pointers to skip all 'X' characters in both strings.
// The order of 'L' and 'R' must remain the same.
//
// Rules:
// 1. 'L' can only move to the left, so its index in start
//    cannot be smaller than its index in result.
// 2. 'R' can only move to the right, so its index in start
//    cannot be greater than its index in result.
//
// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    bool canTransform(string start, string result) {
        int left = 0;
        int right = 0;
        int n = start.size();

        while (left < n || right < n) {
            while (left < n && start[left] == 'X') left++;
            while (right < n && result[right] == 'X') right++;

            if (left == n || right == n)
                return left == n && right == n;

            if (start[left] != result[right])
                return false;

            if (start[left] == 'L' && left < right)
                return false;

            if (start[left] == 'R' && left > right)
                return false;

            left++;
            right++;
        }

        return true;
    }
};
