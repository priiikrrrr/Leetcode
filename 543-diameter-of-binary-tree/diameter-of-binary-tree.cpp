/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diameterRe = 0;
    int lev(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(lev(root->left), lev(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;
        int dia = lev(root->left) + lev(root->right);
        diameterRe = max(dia, diameterRe);

        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);

        return diameterRe;
    }
};