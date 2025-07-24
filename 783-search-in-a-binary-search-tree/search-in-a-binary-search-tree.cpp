class Solution {
public:
    // bool find(TreeNode* root , TreeNode* value){
    //     if(root == NULL)return false;
    //     if(root == value) return true;
    //     return find(root->left, value);
    // }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        else if(root->val == val)return root;
        else if(root->val > val) return searchBST(root->left , val);
        else return searchBST(root->right, val);
    }
};