class Solution {
public:
    long long findMax(TreeNode* root){
        if(root == NULL)return LLONG_MIN;
        return max((long long)(root->val), max(findMax(root->left), findMax(root->right)));
    }
    long long findMin(TreeNode* root){
        if(root == NULL)return LLONG_MAX;
        return min((long long)(root->val), min(findMin(root->left), findMin(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL)return true;
        else if((long long)(root ->val) <= findMax(root->left))return false;
        else if((long long)(root ->val) >= findMin(root->right))return false;
        return isValidBST(root->left) && isValidBST(root->right);
        
    }
};