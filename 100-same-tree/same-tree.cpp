class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base case
        if(p == NULL && q == NULL)return true;
        // if(p == NULL || q == NULL)return false;
        if(p == NULL && q != NULL)return false;
        if(p != NULL && q == NULL)return false;

        //edge case
        if(p->val != q->val)return false;
        
        //general case
        bool leftTree = isSameTree(p->left, q->left);
        if(leftTree == false)return false;
        
        //general case
        bool rightTree = isSameTree(p->right, q->right);
        if(rightTree == false)return false;
        
        
        return true;
    }
};