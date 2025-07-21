class Solution {
public:
    bool inverter(TreeNode* leftroot, TreeNode* rightroot) {
        if(leftroot == NULL && rightroot == NULL)return true;
        if(leftroot == NULL || rightroot == NULL) return false;
        if(leftroot->val != rightroot->val) return false;

        bool leftinv = inverter(leftroot->left,  rightroot->right);
        bool rightinv = inverter(leftroot->right,rightroot->left);
        return (leftinv && rightinv); /**/

    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        return inverter(root->left, root->right);
    }
};