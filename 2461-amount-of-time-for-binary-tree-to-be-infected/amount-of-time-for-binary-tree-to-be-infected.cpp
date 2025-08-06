class Solution {
    /*
        BFS :- use of Q , level Traversal from the prespective of the node
       infected use unordered_map<Node, Node> parent; to store the parent of the
       child node we are at. create a parent unordered_map-> do
       preOrdertraversal/or any other and store the node youre at i.e L/R and
       their ROOT [TC-> O(1)] The Q we have for BFS traversal , we will post the
       node and the respective level of the node in pair format inside the queue
       -> queue<pair<Node,int>>Q; unordered_set<Node>isVisited - will tell if
       the node is infected or not , the ele init is infected alr check for a
       respective node(q.front()) if its, left, right and parent exists ? if it
       does push it into the Q +1(in level)and simultaneously , add in isVisited
    */
public:
 TreeNode* first = NULL;
    void markParent(TreeNode* root,
                    unordered_map<TreeNode*, TreeNode*>& parent) {
        if (root == NULL)
            return;
        if (root->left)
            parent[root->left] = root;
        if (root->right)
            parent[root->right] = root;
        markParent(root->left, parent);
        markParent(root->right, parent);
    }
    void find(TreeNode* root, int start) {
        if (root == NULL)
            return ;
        if (root->val == start)first =  root;
        find(root->left, start);
        find(root->right, start);
        // return root;
    }
    int amountOfTime(TreeNode* root, int start) {
        find(root, start); // find
        unordered_map<TreeNode*, TreeNode*> parent;
        markParent(root, parent); // mark
        unordered_set<TreeNode*> isInfected;
        isInfected.insert(first);
        queue<pair<TreeNode*, int>> q;
        // pair<TreeNode*,int>p;
        // p.first = first;
        // p.second = 0;
        q.push({first, 0});
        int maxLevel = 0;
        // bfs
        while (q.size() > 0) {
            pair<TreeNode*, int> p = q.front();
            q.pop();
            int level = p.second;
            maxLevel = max(maxLevel, level);
            TreeNode* temp = p.first;
            if (temp->left) {
                if (isInfected.find(temp->left) == isInfected.end()) {
                    q.push({temp->left, level + 1});
                    isInfected.insert(temp->left);
                }
            }
            if (temp->right) {
                if (isInfected.find(temp->right) == isInfected.end()) {
                    q.push({temp->right, level + 1});
                    isInfected.insert(temp->right);
                }
            }
            if(parent.find(temp) != parent.end()){
                if(isInfected.find(parent[temp]) == isInfected.end()){
                    q.push({parent[temp], level+1});
                    isInfected.insert(parent[temp]);
                }
            }
        }
        return maxLevel;
    }
};