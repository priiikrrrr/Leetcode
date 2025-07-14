// palindrome concept , partitionLL/merging concept , merging LL concept
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL;
        ListNode* dummy = new ListNode(0);
        ListNode* tc = dummy;
        ListNode* ta = a;
        ListNode* tb = b;
        while(ta != NULL && tb != NULL){
            tc->next = ta;
            ta = ta->next;
            tc = tc->next;
            tc->next = tb;
            tb = tb->next;
            tc = tc->next;
        }
        tc->next = ta;
        head =  tc->next;
    }    
};