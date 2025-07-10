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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 1;
        int firstindex = -1;
        int secondindex = -1;
        vector<int>ans;
        int minDis = INT_MAX;
        // vector<ListNode*>ansLL;
        ListNode* temp = head; //a
        ListNode* slow = head->next; //b
        ListNode* fast = head->next->next; //c
        if(fast == NULL) return {-1,-1};

        while(fast){
            if((slow->val > temp->val && slow->val > fast->val) || (slow->val < temp->val && slow->val < fast->val)){
                if(firstindex == -1)firstindex = idx;
                else secondindex = idx;
            }
            temp = temp->next;
            slow = slow->next;
            fast = fast->next;
            idx++;
        }
        if(secondindex == -1) return {-1,-1};
        int maxDist = secondindex - firstindex;
//re initialization for min dis;
        firstindex = -1;
        secondindex = -1;
        idx = 1;
        temp = head; 
        slow = head->next ;
        fast = head->next->next;
        while(fast){
            if((slow->val > temp->val && slow->val > fast->val) || (slow->val < temp->val && slow->val < fast->val)){  
                firstindex = secondindex;
                secondindex = idx; 
                if(firstindex != -1){ int d = secondindex - firstindex;
                minDis = min(minDis,d);
                }
            }
            temp = temp->next;
            slow = slow->next;
            fast = fast->next;
            idx++;
        }
        return {minDis, maxDist};
    }
};