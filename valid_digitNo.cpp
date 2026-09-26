// 🔗 Problem: Valid Digit
// 💡 Approach: Find the first digit, then check every digit of n.
//              Return true if x is present but is not the first digit.
// ⏱️ Time: O(log n)
// 💾 Space: O(1)

class Solution {
public:
    bool validDigit(int n, int x) {
        int temp = n;

        while(temp >= 10) {
            temp = temp / 10;
        }

        int firstdigit = temp;

        while(n > 0) {
            int digit = n % 10;

            if((digit == x) && (x != firstdigit)) {
                return true;
            }

            n = n / 10;
        }

        return false;
    }
};
