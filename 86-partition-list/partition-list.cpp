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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* low = dummy1;
        ListNode* high = dummy2;
        while(temp != NULL){
            if(temp->val < x){
                low->next = temp;
                temp = temp->next;
                low = low->next;
            }else{
                //if t->val >= x
                high->next = temp;
                temp = temp->next;
                high = high->next;
            }
            // if(temp->val == x) temp->next = temp->next->next;
        }
        low->next = dummy2->next;
        high->next = NULL;
        //  dummy1 = dummy1->next; 
        return dummy1->next;
    }
};