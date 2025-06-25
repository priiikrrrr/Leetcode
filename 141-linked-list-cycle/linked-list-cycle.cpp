/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       /*
        here we are replacing value of ll which isnot reliable since we are 
        assigning the bool values to int, and its against the q as well 
       
        ListNode*temp = head;
        // ListNode*end = NULL;
        // int len = 0;
        bool flag = false;
        if(temp == NULL)return false;
        while(temp!= NULL){
            if(temp->val == true) return true;
            else{
            temp->val = true;
            temp = temp->next;
            }

        }
        return false;
       */
//better approach is to use floyd tortoise;hare algo // fast slow algo 
       if(head == NULL || head->next == NULL) return false;
       ListNode* temp1 = head; 
       ListNode* temp2 = head;
        while(temp2 != NULL && temp2->next != NULL){
            temp1 = temp1->next;
            temp2 = temp2->next->next;

            if(temp1 == temp2)return true;//cycle detected
        }
       return false;
    }
};