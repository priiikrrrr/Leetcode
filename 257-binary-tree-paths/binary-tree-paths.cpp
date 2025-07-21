class Solution {
public:
    void paths(TreeNode* root, string s,vector<string>&ans){
        if(root == NULL) return;
        string a = to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            s += a;
            ans.push_back(s);
            return;
        }
        paths(root->left, s+a+"->", ans);
        paths(root->right, s+a+"->", ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        paths(root, "" ,ans);
        return ans;
    }
};