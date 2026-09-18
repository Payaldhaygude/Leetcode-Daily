```cpp
// Problem: Contains Duplicate II
// Link: https://leetcode.com/problems/contains-duplicate-ii/
// Difficulty: Easy
//
// Approach:
// Store each number's latest index in an unordered_map.
// If the number appears again, check whether the index difference is <= k.
// If yes, return true; otherwise update its index and continue.
//
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            if(mp.count(nums[i])) {
                if(i - mp[nums[i]] <= k)
                    return true;
            }

            mp[nums[i]] = i;
        }

        return false;
    }
};
```
