// 🔗 Problem: https://leetcode.com/problems/merge-two-sorted-lists/
// 🟢 Difficulty: Easy

// 💡 Approach:
// Use a dummy node and compare elements from both lists.
// Attach the smaller node each time and move forward.

// ⏱ Time Complexity: O(n + m)
// 🧠 Space Complexity: O(1)

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newnode = new ListNode(-1);
        ListNode* merge = newnode;

        while(list1 != NULL && list2 != NULL) {
            if(list1->val <= list2->val) {
                merge->next = list1;
                list1 = list1->next;
            } else {
                merge->next = list2;
                list2 = list2->next;
            }
            merge = merge->next;
        }

        if(list1 != NULL) {
            merge->next = list1;
        } else {
            merge->next = list2;
        }

        return newnode->next;
    }
};
