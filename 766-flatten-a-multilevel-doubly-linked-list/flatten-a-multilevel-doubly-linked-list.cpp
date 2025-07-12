/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

HINT : use recursion !!
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* t = head;
        while(t){
            Node* a = t->next;
            if(t->child){
                Node* b = t->child;
                t->child = NULL;
                b = flatten(b); //rec
                t->next = b;
                b->prev = t;
                while(b->next){
                    b = b->next;
                }
                b->next = a;
                if(a) a->prev = b;
            }
            t = a;
        }
        return head;
    }
};