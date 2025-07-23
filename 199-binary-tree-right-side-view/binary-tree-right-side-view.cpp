class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL)return 0;
        return 1+ max(levels(root->left), levels(root->right));
    }
    void preOrder(TreeNode* root ,vector<int>&final , int level){
        if(root == NULL)return;
        final[level] = root->val;
        preOrder(root->left, final, level+1);
        preOrder(root->right, final, level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>final(levels(root),0);
        preOrder(root, final ,0);
        return final;
    }
};