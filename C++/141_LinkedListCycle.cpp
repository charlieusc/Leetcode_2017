/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        if (!head || !head->next) {
            return false;
        }
        fast = fast->next;
        while (fast && fast->next) {
            if (fast == slow) {
                return true;
            } else {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return false;
    }
};