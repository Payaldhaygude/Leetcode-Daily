```cpp
// 🔗 Problem: https://leetcode.com/problems/alternate-digit-sum/
// 🟢 Difficulty: Easy
// 💡 Approach: Count the digits first to determine the starting sign, then extract each digit from right to left and alternate between + and -.
// ⏱️ Time Complexity: O(log n)
// 💾 Space Complexity: O(1)

class Solution {
public:
    int alternateDigitSum(int n) {
        int sign = 1;
        int sum = 0;
        int count = 0;
        int temp = n;

        while (temp > 0) {
            count++;
            temp = temp / 10;
        }

        if (count % 2 == 0)
            sign = -1;

        while (n > 0) {
            int digits = n % 10;
            sum = sum + digits * sign;
            sign = -sign;
            n = n / 10;
        }

        return sum;
    }
};
```
