class Solution {
public:
    void PrintTraversal(TreeNode* root , vector<int>&ans){
        if(root == NULL)return;
        ans.push_back(root->val);
        PrintTraversal(root->left, ans);
        PrintTraversal(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //preOrder = root left right
        vector<int>ans;
        PrintTraversal(root,ans);
        return ans;
    }
};