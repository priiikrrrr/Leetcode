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
        ListNode* curr = head;
        ListNode* Next = NULL;
        ListNode* prev = NULL;

        while(curr){
            Next = curr->next;// to save curr
            curr->next = prev;//connect curr to prev node
            prev = curr; //next round
            curr = Next;
        }
        return prev;

    }
};