// 🔗 Problem: https://leetcode.com/problems/valid-parentheses/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use a stack to store opening brackets.
// For each closing bracket, check if stack is empty.
// Compare it with the top of the stack.
// If mismatch, return false.

// ⏱ Time Complexity: O(n)
// 🧠 Space Complexity: O(n)

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c: s) {
            if(c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if(st.empty()) return false;

                char top = st.top();
                st.pop();

                if((c == ')' && top != '(') || 
                   (c == ']' && top != '[') || 
                   (c == '}' && top != '{')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
