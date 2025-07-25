class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL)return new TreeNode(val);
        else if(root->val < val){
            if(root->right == NULL){
                TreeNode* temp = new TreeNode(val);
                root->right = temp;
            }
            else{
            insertIntoBST(root->right, val);
            }
        }
        else{
            //(root->val > val)
            if(root->left == NULL){
                TreeNode* temp = new TreeNode(val);
                root->left = temp;
            }
            else{
            insertIntoBST(root->left, val);
            }
        }
        return root;
    }
};