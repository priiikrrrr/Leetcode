class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL)return 0;
        return 1+ max(levels(root->left), levels(root->right));
    }
    void nthdisplayTree(TreeNode* root, int curr , int reqLevel , vector<int>&final){
        if(root == NULL)return;                                       //base case
        if(curr == reqLevel){                                         //work optimized
            final[curr] = root->val;
            return;
        }             
        nthdisplayTree(root->left, curr+1 , reqLevel , final);        //call 1
        nthdisplayTree(root->right , curr+1 , reqLevel, final);       //call2         
    } 

    void order(TreeNode* root, vector<int>&final){
        int n = final.size();
        for(int i = 0 ; i < n ; i++){
            nthdisplayTree(root, 0 , i , final);
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>final(levels(root),0);
        order(root, final);
        return final;
    }
};