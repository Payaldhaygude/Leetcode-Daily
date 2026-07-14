// LeetCode 189 - Rotate Array
//
// Approach:
// 1. Reduce k using modulo because rotating by n (array size) or its multiples
//    leaves the array unchanged.
// 2. Use STL std::rotate() to move the last k elements to the front.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        std::rotate(nums.begin(), nums.end() - k, nums.end());
    }
};
