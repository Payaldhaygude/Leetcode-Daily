// 🔗 Problem: https://leetcode.com/problems/fibonacci-number/
// 🟢 Difficulty: Easy
//
// 💡 Approach (Dynamic Programming):
// 1. Handle the base cases (n = 0 and n = 1).
// 2. Create a DP array to store Fibonacci numbers from 0 to n.
// 3. Initialize fib[0] = 0 and fib[1] = 1.
// 4. Compute each Fibonacci number using:
//    fib[i] = fib[i - 1] + fib[i - 2].
// 5. Return fib[n].
//
// ⏱️ Time Complexity: O(n)
// 📦 Space Complexity: O(n)

class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;

        vector<int> fib(n + 1);

        fib[0] = 0;
        fib[1] = 1;

        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        return fib[n];
    }
};
