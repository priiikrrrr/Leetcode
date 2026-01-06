class Solution {
public:
void helper(TreeNode* root, string s, vector<string>&st){
    if(root == NULL)return;
    string a = to_string(root->val);
    if(root->left == NULL && root->right == NULL){
        s += a;
        st.push_back(s);
        return;
    }
    helper(root->left , s + a+"->" , st);
    helper(root->right , s + a+"->" , st);

}
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>st;
        helper(root, "" , st);
        return st;
    }
};