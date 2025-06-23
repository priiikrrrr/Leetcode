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
    bool isPalindrome(ListNode* head) {
        ListNode*curr = head;
        vector<int>LinkedList;
        while(curr != NULL){
            LinkedList.push_back(curr->val);
            curr = curr->next;
        }
        // bool flag = false;
        int slow = 0;
        int fast = LinkedList.size() - 1;
        while(slow < fast){
            if(LinkedList[slow] != LinkedList[fast])return false;
            fast--;
            slow++;
        }
        return true;
        // for(int i = (LinkedList.size()-1) ; i >= 0 ; i--){
        //     if(LinkedList[i] != LinkedList[slow]) break;
        //     else{
        //         slow++;
        //         flag = true;
        //     }
            
        // }
        // if(flag == true)return true;
        // else return false;



        // ListNode*prev = NULL;
        // ListNode*nextNode = NULL;
        // while(curr != NULL){
        //     nextNode  = curr->next; //storing value in next nodde
        //     curr->next = prev; //reversing the pointer
        //     prev = curr; //shifting forward after reversal
        //     curr = nextNode;
        // }

    }
};