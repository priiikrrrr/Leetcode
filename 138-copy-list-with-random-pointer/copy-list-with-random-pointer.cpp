/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

/*
steps - 
    1. Construct a deep copy(refer palind... question)without random connection.
    2. Create alternate connections(refer merge question).
    3. Assign random pointers of duplicate
    4. Separate the lists i.e removing the connection(refer odd/even LL && partition LL)
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy = new Node(0);
        Node* tc = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tc->next = a;
            tc   = tc->next;
            temp = temp->next;
        }
        Node* dupe = dummy->next;
        //step2 
        Node* a = head;
        Node* b = dupe;
        dummy = new Node(-1);
        Node* td = dummy;
        while(a){
            td->next = a;
            a = a->next;
            td = td->next;
            td->next = b;
            b = b->next;
            td = td->next;
        }
        dummy = dummy->next;//new combined list 
        //step3 
        Node* t1 = dummy;// t1 tarverses at org list; t2 traverses at dupe
        while(t1){
            Node* t2 = t1->next;
            if(t1->random)t2->random = t1->random->next;
            t1 = t1->next->next;
        }
        //step4
        Node* d1 = new Node(-1);
        Node* te = d1;
        Node* d2 = new Node(-1);
        Node* tf = d2;
        Node* t = dummy;

        while(t){
            te->next = t;
            t = t->next;
            te = te->next;
            tf->next = t;
            t = t->next;
            tf = tf->next;
        }
        te->next = NULL;
        tf->next = NULL;
        d1 = d1->next;//org w random
        d2 = d2->next;//dupe w random
        
        return d2;
    }
};