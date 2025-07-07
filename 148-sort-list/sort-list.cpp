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
//sc O(1)
    ListNode* merge(ListNode* ta, ListNode* tb){
        ListNode* dummy = new ListNode(1000);
        ListNode* tc = dummy;
        while(ta != NULL && tb != NULL){
            if(ta->val <= tb->val){
                tc->next = ta;
                ta = ta->next;
                tc = tc->next;
            }else{
                tc->next = tb;
                tb = tb->next;
                tc = tc->next;
            }
        }
        if(ta == NULL)tc->next = tb;
        else tc->next = ta;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        //base case for recursion
        if(head ==  NULL || head->next == NULL)return head;
        ListNode* slow = head;
        ListNode* fast = head;
        //for even length check (fast != NULL && fast->next != NULL)
        //for odd length i.e to FIND LEFT MIDDLE check (fast->next != NULL && fast->next->next != NULL)
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;//for even length
        }
        //now SLOW is at left middle
        ListNode* ta = head;
        ListNode* tb = slow->next;
        slow->next = NULL;
        ta = sortList(ta);
        tb = sortList(tb);
        ListNode* tc = merge(ta,tb);
        return tc;
    }
};