// 🔗 Problem: https://leetcode.com/problems/maximum-subarray/
// 🟢 Difficulty: Easy
// 💡 Approach:
// We use Kadane’s Algorithm.
// - Keep a running sum of the current subarray.
// - If the sum becomes negative, reset it to 0.
// - At each step, update the maximum sum found so far.
// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = nums[0];

        for(int i=1; i< nums.size();i++) {           
            if (sum > 0) {
                sum += nums[i];
            } else {
                sum = nums[i];
            }
            maxsum = max(maxsum , sum);
        
        }
        return maxsum;
        
    }
};
