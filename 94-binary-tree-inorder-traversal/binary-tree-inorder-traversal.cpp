class Solution {
public:
    void PrintTraversal(TreeNode* root , vector<int>& ans){
        if(root == NULL)return;
        PrintTraversal(root->left, ans);
        ans.push_back(root->val);
        PrintTraversal(root->right, ans);

    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        PrintTraversal(root, ans);
        return ans;
    }
};