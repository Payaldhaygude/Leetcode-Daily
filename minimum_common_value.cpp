// 🔗 Problem: https://leetcode.com/problems/minimum-common-value/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Since both arrays are sorted, use two pointers.
// Compare the current elements of both arrays.
// - If they are equal, return that value (it is the smallest common value).
// - If nums1[i] < nums2[j], move i forward.
// - Otherwise, move j forward.
// If no common element is found, return -1.

// ⏱ Time Complexity: O(n + m)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return -1;
    }
};
