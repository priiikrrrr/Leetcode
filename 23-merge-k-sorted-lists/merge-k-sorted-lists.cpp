class Solution {
public:
    ListNode* merge(ListNode* ta, ListNode* tb) {
        ListNode* dummy = new ListNode(100);
        ListNode* tc = dummy;

        while (ta != NULL && tb != NULL) {
            if (ta->val <= tb->val) {
                tc->next = ta;
                ta = ta->next;
                tc = tc->next;
            } else {
                tc->next = tb;
                tb = tb->next;
                tc = tc->next;
            }
        }
        if (ta == NULL)
            tc->next = tb;
        else
            tc->next = ta;
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0)
            return NULL;
        while (lists.size() > 1) {
            //this one has a space of O(1)
            ListNode* ta = lists[0];
            lists.erase(lists.begin());//pop- front
            ListNode* tb = lists[0];
            lists.erase(lists.begin());
            ListNode* tc = merge(ta, tb);
            lists.push_back(tc);
        }
        return lists[0];
    }
};