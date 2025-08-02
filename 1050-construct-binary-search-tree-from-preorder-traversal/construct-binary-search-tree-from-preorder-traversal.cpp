class Solution {
public:
    void insert(TreeNode* root, int val){
        if(root == NULL) root = new TreeNode(val);
        // if(root == NULL) return new TreeNode(val);
        //attaching
        else if(root->val > val){
            if(root->left== NULL){
            TreeNode* t1 = new TreeNode(val);
            root->left = t1;
            // return root;
            }
            else insert(root->left,val);
        }
        else{
            //root->val < val
            if(root->right == NULL){
                TreeNode* t2 = new TreeNode(val);
                root->right = t2;
                // return root;
            }
            else  insert(root->right, val);
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        int n = preorder.size();
        for(int i = 1 ; i < n ; i++){
            // TreeNode* temp = preorder[i];
            insert(root, preorder[i]);
        }
        return root;
    }
};