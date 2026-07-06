// 🔗 Problem: https://leetcode.com/problems/relative-sort-array/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Sort arr1 so that the remaining elements are already in ascending order.
// 2. Traverse arr2 and add all matching elements from arr1 to the answer.
// 3. Mark the used elements as -1.
// 4. Traverse arr1 again and add all remaining elements to the answer.

// ⏱ Time Complexity: O(n log n + n × m)
// 🧠 Space Complexity: O(n)

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        // Sort arr1
        sort(arr1.begin(), arr1.end());

        // Add common elements in the order of arr2
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                    arr1[j] = -1;      // Mark as used
                }
            }
        }

        // Add remaining elements
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] != -1) {
                ans.push_back(arr1[i]);
            }
        }

        return ans;
    }
};
