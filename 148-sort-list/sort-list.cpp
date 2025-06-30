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
    ListNode* mergeList(ListNode* L1, ListNode* L2) {
        if(L1 == NULL)return L2;
        if(L2 == NULL)return L1;

        if(L1->val <= L2->val){
            L1->next = mergeList(L1->next, L2);
            return L1;
        }
        L2->next = mergeList(L1, L2->next);
            return L2;
    }
    ListNode* sortList(ListNode* head) {
      if(head == NULL || head->next == NULL)return head;
      ListNode* slow = head;
      ListNode* fast = head;
      fast =  fast->next;
      while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
      }
      ListNode* newHead = slow->next;
      slow->next = NULL;

      ListNode* L1 = sortList(head);
      ListNode* L2 = sortList(newHead);

      return mergeList(L1,L2);
    }
};