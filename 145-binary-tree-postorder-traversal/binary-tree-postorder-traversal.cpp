class Solution {
public:
    void PrintTraversal(TreeNode* root, vector<int>&ans){
        if(root == NULL)return;
        PrintTraversal(root->left , ans);
        PrintTraversal(root->right , ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        PrintTraversal(root,ans);
        return ans;
    }
};