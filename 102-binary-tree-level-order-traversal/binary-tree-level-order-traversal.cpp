class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL)return 0;
        return 1+ max(levels(root->left), levels(root->right));
    }
    void PrintTraversal(TreeNode* root , int currlevel , int reqLevel, vector<int>& v){
        if(root == NULL)return;
        if(currlevel == reqLevel){
            v.push_back(root->val);
            return;
        }
        PrintTraversal(root->left, currlevel+1 , reqLevel , v);
        PrintTraversal(root->right, currlevel+1 , reqLevel , v);
    }

    void order(TreeNode* root, vector<vector<int>>& final){
        int n = levels(root);
        for(int i = 1 ; i <= n ; i++){
            vector<int>v;
            PrintTraversal(root,1,i,v);
            final.push_back(v);
            cout << endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>final;
        order(root, final);
        return final;
    }
};