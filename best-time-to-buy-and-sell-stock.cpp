// 🔗 Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Track the minimum price so far.
// Calculate profit at each step.
// Update maximum profit whenever possible.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrices = prices[0];

        for(int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrices) {
                minPrices = prices[i];
            } else if (prices[i] - minPrices > profit) {
                profit = prices[i] - minPrices;
            } 
        }

        return profit;
    }
};
