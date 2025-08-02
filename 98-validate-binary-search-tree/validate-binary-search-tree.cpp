class Solution {
public:
    TreeNode* t1 = NULL;
    bool flag = true;
    void inorder(TreeNode* root){
        if(root == NULL)return;
        inorder(root->left);
        if(t1 != NULL){
            if(root->val <= t1->val){
                flag = false;
                return;
            }
        }
        t1 = root;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        return flag;
    }
};