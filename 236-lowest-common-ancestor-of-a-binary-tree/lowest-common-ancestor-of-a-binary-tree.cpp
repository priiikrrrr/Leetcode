class Solution {
public:
    bool find(TreeNode* root , TreeNode* value){
        if(root == NULL)return false;
        if(root == value) return true;
        return find(root->left, value)|| find(root->right, value);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root == q) return root;
        else if(find(root->left, p) && find(root->right, q))return root;
        else if(!find(root->left, p) && !find(root->right, q))return root;
        else if(find(root->left, p) && !find(root->right,q))return lowestCommonAncestor(root->left, p , q);
        else return lowestCommonAncestor(root->right, p , q);
    }
}; 