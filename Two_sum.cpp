// 🔗 Problem: https://leetcode.com/problems/two-sum/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use a hash map to store elements and their indices.
// For each element, check if (target - element) exists.
// If it exists, return the indices.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
