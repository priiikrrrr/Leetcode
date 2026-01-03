class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;


//fast ko pehle n+1 steps aage le jao
        for(int i = 1 ; i <= n+1 ; i++){
            if(fast == NULL)return head->next;
            fast = fast->next;
        }
//move slow and fast at same pace till fast != NULL
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }
//as the above loop ends , the slow pointer is exactly at left of the nth node from end
        slow->next = slow->next->next;//delete the slow ka next
        return head;

    }
};