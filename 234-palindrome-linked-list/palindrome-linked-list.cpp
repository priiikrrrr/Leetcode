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
        ListNode* curr = head; //temporary node at head
        vector<int>list; //making a vector/array to store node's value 

        while(curr != NULL){
            list.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0 ; 
        int j = list.size()-1;
        //traversing the array using 2 pointer approach the check the values of node innit is similar acc to plaindrome or not 
        while(i < j){
            if(list[i] != list[j])return false;
                i++;
                j--;
        }
            return true;
    }
};