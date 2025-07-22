class Solution {
public:
//optimized
    int levels(TreeNode* root){
        if(root == NULL)return 0;
        return 1+ max(levels(root->left), levels(root->right));
    }
    void order(TreeNode* root, vector<vector<int>>& final, int l){
        if(root == NULL)return;
        final[l].push_back(root->val);

        order(root->left, final, l+1);
        order(root->right, final, l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> final;
        for(int i = 1 ; i <= n ; i++){
            vector<int> v;
            final.push_back(v);
        }
        order(root, final, 0);
        return final;
    }
};