// 🔗 Problem: https://leetcode.com/problems/maximum-product-of-three-numbers/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Sort the array.
// 2. Compute the product of the three largest numbers.
// 3. Compute the product of the two smallest numbers and the largest number.
// 4. Return the maximum of the two products.

// ⏱ Time Complexity: O(n log n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int product2 = nums[0] * nums[1] * nums[n - 1];

        return max(product1, product2);
    }
};
