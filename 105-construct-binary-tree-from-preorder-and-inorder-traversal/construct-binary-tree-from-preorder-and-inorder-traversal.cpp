class Solution {
public:
    TreeNode* construct(vector<int>& preorder,int prelow, int prehigh, vector<int>& inorder, int inlow, int inhigh){
        if(prelow > prehigh)return NULL;
        TreeNode* root = new TreeNode(preorder[prelow]);
        if(prelow == prehigh)return root;
        int i = inlow;
        while(i <= inhigh){
            if(inorder[i] == preorder[prelow])break;
            i++;
        }
        int left = i - inlow;
        int right = inhigh - i ; 
        root->left = construct(preorder, prelow+1, prelow+left, inorder, inlow, i-1);
        root->right = construct(preorder, prelow+left + 1, prehigh, inorder, i+1, inhigh);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return construct(preorder, 0 , n-1, inorder, 0 , n-1);
    }
};