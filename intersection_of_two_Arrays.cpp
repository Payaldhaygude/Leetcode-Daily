// 🔗 Problem: LeetCode 349 - Intersection of Two Arrays
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Sort both arrays.
// 2. Use two pointers starting from the end of each array.
// 3. If elements are equal, add them to the answer only if
//    they are not already present.
// 4. Move the pointer of the larger element otherwise.
//
// ⏱ Time Complexity: O(n log n + m log m)
// 🧠 Space Complexity: O(k)   // k = size of intersection

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = nums1.size() - 1;
        int j = nums2.size() - 1;

        vector<int> ans;

        while (i >= 0 && j >= 0) {
            if (nums1[i] == nums2[j]) {
                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i--;
                j--;
            }
            else if (nums1[i] > nums2[j]) {
                i--;
            }
            else {
                j--;
            }
        }

        return ans;
    }
};
