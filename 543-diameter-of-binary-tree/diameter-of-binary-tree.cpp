class Solution {
public:
    int maxDia = 0;
    int visit(TreeNode* root){
        if(root == NULL) return 0;
        int dia = levelOfTree(root->left) + levelOfTree(root->right);
        maxDia = max(maxDia, dia);
        visit(root->left);
        visit(root->right);
        return maxDia;
    }
    int levelOfTree(TreeNode* root){
        if(root == NULL) return 0;
        int levels = 1 + max(levelOfTree(root->left),levelOfTree(root->right));
        return levels;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDia = 0;
        return visit(root);
    }
};