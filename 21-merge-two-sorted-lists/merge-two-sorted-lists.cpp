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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dumm = new ListNode(0);
        ListNode* temp = dumm;

        while(list1 && list2){
            //while neither of them is reached till the end 
            if(list1->val > list2->val){
                //append the list2 value to the merged list , and update the 
                //pointer of list2
                temp->next = list2;
                list2 = list2->next;
            }else{
                temp->next = list1;
                list1 = list1->next;
            }
            temp = temp->next;
        }

        if(list1) temp->next = list1;
        if(list2) temp->next = list2;

        return dumm->next;
    }
};