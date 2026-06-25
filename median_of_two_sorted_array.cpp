// 🔗 Problem: LeetCode 4 - Median of Two Sorted Arrays
// 🟡 Difficulty: Hard
//
// 💡 Approach:
// 1. Merge both sorted arrays using the built-in merge() function.
// 2. If the total number of elements is odd, return the middle element.
// 3. If the total number of elements is even, return the average of the two middle elements.
//
// ⏱ Time Complexity: O(n + m)
// 🧠 Space Complexity: O(n + m)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size());

        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              merged.begin());

        int n = merged.size();
        int mid = n / 2;

        if (n % 2 == 1) {
            return merged[mid];
        }

        return (merged[mid - 1] + merged[mid]) / 2.0;
    }
};
