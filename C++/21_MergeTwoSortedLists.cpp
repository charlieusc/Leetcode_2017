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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        
        if (l1!=NULL && l2!=NULL) {
            if (l1->val < l2->val) {
                dummy.next = l1;
                l1 = l1->next;
            } else {
                dummy.next = l2;
                l2 = l2->next;
            }
        } else if (l1 != NULL) {
            dummy.next = l1;
            l1 = l1->next;
        } else if (l2 != NULL){
            dummy.next = l2;
            l2 = l2->next;
        } else {
            return NULL;
        }
        ListNode *temp = dummy.next;
        while(l1!=NULL && l2!=NULL) {
            if (l1->val < l2->val) {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            } else {
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        while (l1!=NULL) {
            temp->next = l1;
            temp = temp->next;
            l1 = l1->next;
        }
        while (l2!=NULL) {
            temp->next = l2;
            temp = temp->next;
            l2 = l2->next;
        }
        return dummy.next;
    }
};