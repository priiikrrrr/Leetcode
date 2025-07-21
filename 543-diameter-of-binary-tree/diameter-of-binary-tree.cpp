class Solution {
public:
    void visit(TreeNode* root, int&maxDia){
        if(root == NULL) return;
        int dia = levelOfTree(root->left) + levelOfTree(root->right);
        maxDia = max(maxDia, dia);
        visit(root->left,maxDia);
        visit(root->right, maxDia);
    }
    int levelOfTree(TreeNode* root){
        if(root == NULL) return 0;
        int levels = 1 + max(levelOfTree(root->left),levelOfTree(root->right));
        return levels;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        visit(root,maxDia);
        return maxDia;
    }
};