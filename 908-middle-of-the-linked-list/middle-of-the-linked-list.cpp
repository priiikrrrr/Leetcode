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
/*
length of node traverse kro -> 0 to n-1
for odd length -> (n/2)thn index -> middle 
for even length -> (n/2)th -> right middle and (n/2 -1)th -> left middle 
*/
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            len++;
            temp = temp->next;
        }
        int midIndex = len/2;
        ListNode* mid = head;
        for(int i = 1 ; i<= midIndex ;i++){
            mid = mid->next;
        }
        return mid;
    }
};