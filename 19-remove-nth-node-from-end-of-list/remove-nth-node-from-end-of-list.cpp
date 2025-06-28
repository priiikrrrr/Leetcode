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
    ListNode* removeNthFromEnd(ListNode* head, int idx){
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        // if(size == 0) return NULL;
        // else if(idx < 1 || idx > size)return temp;
        // else if(idx == 1)return temp = temp->next;
        if(size == idx)return head->next;
        temp = head;
        // for(int i = 0 ; i < (size - idx -1) ; i++)temp = temp->next;
        for(int i = 1 ; i < size - idx ; i++)temp = temp->next;
        temp->next = temp->next->next;
        return head;
    }
};