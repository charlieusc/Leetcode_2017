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
    ListNode* reverseList(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        while(head && head->next) {
            ListNode *temp = head->next;
            head->next = temp->next;
            temp->next = dummy.next;
            dummy.next = temp;
        }
        return dummy.next;
    }
};