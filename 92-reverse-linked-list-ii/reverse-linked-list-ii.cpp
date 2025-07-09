 //break list into 3 parts 
 // 1 to left - 1 ; left to right ; right + 1 to len
 //then use reverse function for left to right part of list 
 // and connect the tail and head of other two parts with the head and tail of reversed list , respectively.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* newhead = reverseList(head->next);
        head->next->next = head;
        head->next  = NULL;
        return newhead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;

        ListNode* temp = head;
        int count = 1;
        while(temp){
            if(count == (left - 1)) a = temp;
            if(count == left) b = temp;
            if(count == right) c = temp;
            if(count == (right + 1)) d = temp;

            temp = temp->next;
            count++;
        }
        //a is at prev ele of left , b is at left
        //c is at the right , d is at the rightmost ele of right 
        
        if(a) a->next = NULL;
        c->next = NULL;

        c = reverseList(b);
        if(a) a->next = c;
        b->next = d;

        if(a) return head;
        return c;
    }
};