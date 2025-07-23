class Solution {
public:
//similar to binary tree path Q
    void paths(TreeNode* root, vector<int> s,vector<vector<int>>&ans , int sum){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            if(root->val == sum){
                s.push_back(root->val);
                ans.push_back(s);
            }
            return;
        }
        s.push_back(root->val);
        paths(root->left , s , ans , (sum-(root->val)));
        paths(root->right , s , ans , (sum-(root->val)));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int> s;
        paths(root, s , ans, targetSum);
        return ans;

    }
};