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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1; 
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* l3 = dummy;
        int fwd = 0;
        while(temp1 != NULL || temp2 != NULL || fwd != 0){
            int sum = 0;
            // sum = (temp1->val + temp2->val);
            // l3->val = sum;
            if(temp1 != NULL){
            sum+= temp1->val;
            temp1 = temp1->next;
            }
            if(temp2!= NULL){
            sum+= temp2->val;
            temp2 = temp2->next;
            }
            sum += fwd;
            fwd = sum/10;
            ListNode* newNode = new ListNode(sum %10);
            l3->next = newNode;
            l3 = l3->next; 

            // if(sum >= 10){
                // fwd = sum % 10;
                // l3->val = fwd;
                // l3->next->val+= sum;
            
        }
        return dummy->next;
    }
};