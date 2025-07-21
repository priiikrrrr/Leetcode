class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)return true;
        // if(p == NULL || q == NULL)return false;
        if(p == NULL && q != NULL)return false;
        if(p != NULL && q == NULL)return false;
        if(p->val != q->val)return false;
        bool leftTree = isSameTree(p->left, q->left);
        if(leftTree == false)return false;
        bool rightTree = isSameTree(p->right, q->right);
        if(rightTree == false)return false;
        return true;
    }
};