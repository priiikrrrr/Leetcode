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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //with O(m+n) length;
        ListNode* ta = list1;
        ListNode* tb = list2;
        ListNode* dummy = new ListNode(100);
        ListNode* tc = dummy;
        while(ta != NULL && tb != NULL){
            if(ta->val <= tb->val){
                ListNode* t = new ListNode(ta->val);
                tc->next = t;
                tc = t;
                ta = ta->next;
            }else{
                ListNode* t = new ListNode(tb->val);
                tc->next = t;
                tc = t;
                tb = tb->next;
            }
        }
        if(ta == NULL) {
            tc->next = tb;
        } 
        else // tb == NULL
        {
        tc->next = ta;
        } 
        return dummy->next;
    }
};