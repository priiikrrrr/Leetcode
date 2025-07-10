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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        vector<ListNode*>finalarr;
        while(temp){
            temp = temp->next;
            len++;
        }
        temp = head;
        int part = len/k ;// or (len/k+ 1)  or (0)
        int remain = len % k ; //parts which are extra (+1)

        while(temp){
            ListNode* dummy = new ListNode(0);
            ListNode* tc = dummy;
            int s = part;
            if(remain > 0) s++;
            remain--;
            for(int i = 1 ; i <= s ; i++){
                tc->next = temp;
                temp = temp->next;
                tc = tc->next;
            }
            tc->next = NULL;
            finalarr.push_back(dummy->next);

        }
        if(finalarr.size() < k){
            int ex = k - finalarr.size();
            for(int i  = 1 ; i <= ex ; i++){
                finalarr.push_back(NULL);
            }
        }
        return finalarr;
    }
};