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
    ListNode* mergeTwoLists(ListNode* ta, ListNode* tb) {
        //SC O(1) - optimized 
        // if(list1 == NULL || list2 == NULL)  return list1;
        // if(list1->next == NULL || list2->next == NULL) return list2;
        ListNode* dummy = new ListNode(100);
        ListNode* tc = dummy;

        while(ta != NULL && tb != NULL){
            if(ta->val <=  tb->val){
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
};