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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        
        int len = 0;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!= NULL){
            len++;
            temp = temp->next;
        }
        int midIndex = len/2;
        temp = head;
        for(int i = 0 ; i < midIndex ; i++){
            prev = temp; //move previous from NULL to position of temp
            temp = temp->next;//and move temp to next node ... do this till we reach mid index
        }
        if(prev != NULL) prev->next = temp->next; //if we havent reach the last index then , i.e we are on mid index then 
        //connect prev to temp-> next hence avoiding the mid ele 
        return head;//after modifying the LL ; return the LL 
    }
};