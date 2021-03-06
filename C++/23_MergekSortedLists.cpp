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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;
        while(lists.size()>1) {
            vector<ListNode*> tLists;
            for(int i=0; i<lists.size()-1; i+=2) {
                ListNode *dummy = mergeTwoLists(lists[i], lists[i+1]);
                tLists.push_back(dummy);
            }
            if (lists.size()%2!=0) {
                tLists.push_back(lists[lists.size()-1]);
            }
            lists = tLists;
        }
        return lists[0];
    }
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