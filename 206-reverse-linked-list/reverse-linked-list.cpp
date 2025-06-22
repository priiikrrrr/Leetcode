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
    ListNode* reverseList(ListNode* head) {
        ListNode*curr = head;
        ListNode*prev = NULL;
        ListNode*nextNode = NULL;
        while(curr != NULL){
            nextNode  = curr->next; //storing value in next nodde
            curr->next = prev; //reversing the pointer
            prev = curr; //shifting forward after reversal
            curr = nextNode;
        }
        return prev;//prev = new head
    }
};