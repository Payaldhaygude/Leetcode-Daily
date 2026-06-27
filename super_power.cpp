// 🔗 Problem: LeetCode 372 - Super Pow
// 🟡 Difficulty: Medium

// 💡 Approach:
// The exponent is given as an array of digits, so it can be extremely large.
// We use the property:
//
// a^[d1 d2 ... dk]
// = (a^[d1 d2 ... d(k-1)])^10 * a^(dk)
//
// Recursively remove the last digit of the exponent and use
// Binary Exponentiation to efficiently compute powers modulo 1337.

// ⏱ Time Complexity: O(n * log 10)
// 🧠 Space Complexity: O(n) (due to recursion)

class Solution {
public:
    // Calculates (a^n) % 1337 using Binary Exponentiation
    int modPow(int a, int n) {
        int ans = 1;
        a %= 1337;

        while (n > 0) {
            if (n % 2)
                ans = (ans * a) % 1337;

            a = (a * a) % 1337;
            n /= 2;
        }

        return ans;
    }

    int superPow(int a, vector<int>& b) {
        // Base case: a^0 = 1
        if (b.empty())
            return 1;

        int last = b.back();
        b.pop_back();

        int part1 = modPow(superPow(a, b), 10);
        int part2 = modPow(a, last);

        return (part1 * part2) % 1337;
    }
};
