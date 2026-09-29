```cpp
// Problem: Perfect Number
// LeetCode: https://leetcode.com/problems/perfect-number/
// Difficulty: Easy
//
// Approach:
// Find all proper divisors of num and add them.
// If the sum is equal to num, it is a perfect number.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int count = 0;

        for(int i = 1; i < num; i++) {
            if(num % i == 0) {
                count = count + i;
            }
        }

        if(num == count)
            return true;

        return false;
    }
};
```

