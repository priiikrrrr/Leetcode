class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);
        //attaching
        else if(root->val > val){
            if(root->left== NULL){
            TreeNode* t1 = new TreeNode(val);
            root->left = t1;
            // return root;
            }
            else insertIntoBST(root->left,val);
        }
        else{
            //root->val < val
            if(root->right == NULL){
                TreeNode* t2 = new TreeNode(val);
                root->right = t2;
                // return root;
            }
            else  insertIntoBST(root->right, val);
        }
        //returning
        return root;
    }
};