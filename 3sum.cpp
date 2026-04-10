// 🔗 Problem: https://leetcode.com/problems/3sum/
// 🟡 Difficulty: Medium

// 💡 Approach:
// 1. Sort the array.
// 2. Fix one element (i).
// 3. Use two pointers (left & right) to find pairs such that sum = 0.
// 4. Skip duplicates to avoid repeated triplets.

// ⏱ Time Complexity: O(n^2)
// 🧠 Space Complexity: O(1) (excluding output)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> arr;
        sort(nums.begin() , nums.end());

        for(int i=0; i<nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    arr.push_back({nums[i] , nums[left] , nums[right]});  

                    while(left < right && nums[left] == nums[left+1]) left++;
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        return arr;
    }
};
