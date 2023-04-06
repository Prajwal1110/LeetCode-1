// Problem Link
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Solution:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *f = head, *s = head;
        for (int i = 0; i < n; i++)
            f = f->next;
        if(!f)
            return head->next;
        while(f->next) {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;
        return head;
    }
};