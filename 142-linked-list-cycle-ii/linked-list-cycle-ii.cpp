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
    ListNode *detectCycle(ListNode *head) {
        // if(head == NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        //phase 1 : detect cycle and stop when detected i.e slow == fast
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)break;
        }
        if(fast == NULL || fast->next == NULL)return NULL;
        //phase 2 : if they meet, find the start of cycle
        while(head != slow){
                head = head->next;
                slow= slow->next;
        }
        return head;
    }
};