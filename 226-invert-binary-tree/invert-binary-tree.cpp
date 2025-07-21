class Solution {
public:
    void inverter(TreeNode* root) {
        if(root == NULL)return;
        // inverter(swap(root->left, root->right));
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        inverter(root->left);
        inverter(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        inverter(root);
        return root;
    }
};