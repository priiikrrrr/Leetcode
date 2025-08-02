class Solution {
public:
    int sum = 0;
    void inorder(TreeNode* root){
        //inorder traversal but in rev
        if(root == NULL)return;
        inorder(root->right);
        root->val += sum;
        sum = root->val;
        inorder(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        // vector<int>ans;
        inorder(root);
        return root;
        // for(int i = ans.size() - 1 ; i < 0 ; i++){
        //     ans[i] += sum;
        // }
        
    }
};