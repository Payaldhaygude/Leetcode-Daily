// 🔗 Problem: https://leetcode.com/problems/check-adjacent-digit-differences/
 // 🟡 Difficulty: Easy

 // 💡 Approach:
 // 1. Traverse the string and compare adjacent digits.
 // 2. Convert each digit character into an integer using - '0'.
 // 3. Calculate the absolute difference between adjacent digits.
 // 4. If any difference is greater than 2, return false.
 // 5. If all adjacent pairs satisfy the condition, return true.

 // ⏱ Time Complexity: O(n)
 // 🧠 Space Complexity: O(1)

 class Solution {
 public:
     bool isAdjacentDiffAtMostTwo(string s) {
         for (int i = 0; i < s.length() - 1; i++) {
             int num1 = s[i] - '0';
             int num2 = s[i + 1] - '0';

             int diff = abs(num1 - num2);

             if (diff > 2) {
                 return false;
             }
         }
         return true;
     }
 };
