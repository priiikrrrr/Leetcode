/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    vector<Node*>nodereg;
    void dfs(Node* sourceNode , Node*copyNode ){
        for(auto neighbor : sourceNode->neighbors){
            if(!nodereg[neighbor->val]){
                //is wale node ki copy nahi bani hai 
                Node* newnode = new Node(neighbor->val);
                nodereg[newnode->val] = newnode;
                copyNode->neighbors.push_back(newnode);
                dfs(neighbor, newnode);
            }else{
                copyNode->neighbors.push_back(nodereg[neighbor->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL)return NULL;
        Node* clone = new Node(node -> val);
        nodereg.resize(110, NULL);

        nodereg[clone->val] = clone;//clone ka add , node reg ke index p store karenge, via clone ka value
        dfs(node, clone);
        return clone;
    }
};