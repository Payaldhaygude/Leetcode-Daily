
// 🔗 Problem: https://leetcode.com/problems/self-dividing-numbers/
// 🟢 Difficulty: Easy

// 💡 Approach:
// 1. Iterate through each number from left to right.
// 2. Extract each digit using % 10.
// 3. Check if the original number is divisible by every digit.
// 4. If a digit is 0 or does not divide the number, reject it.
// 5. Add valid numbers to the answer vector.

// ⏱ Time Complexity: O(n * d), where d is the number of digits
// 🧠 Space Complexity: O(k), where k is the number of valid numbers (excluding output)

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;

        for(int i = left; i <= right; i++) {
            int n = i;
            int count = 0;

            while(n > 0) {
                int digit = n % 10;

                if(digit == 0 || i % digit != 0) {
                    count++;
                    break;
                }

                n = n / 10;
            }

            if(count == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

