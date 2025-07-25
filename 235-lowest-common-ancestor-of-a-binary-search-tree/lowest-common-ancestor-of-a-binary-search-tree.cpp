class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        else if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        else return root;
    }
}; 

 /*
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val == p->val || root->val == q->val)return root;
        else if(root->val > p->val && root->val < q->val)return root;
        else if(root->val < p->val && root->val > q->val)return root;
        else if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        else return lowestCommonAncestor(root->left, p, q);
    }
 */   
/*
    bool find(TreeNode* root , TreeNode* value){
        if(root == NULL)return false;
        if(root == value) return true;
        return find(root->left, value)|| find(root->right, value);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(find(root->left, p) && find(root->left,q))return lowestCommonAncestor(root->left, p , q);
        else if(find(root->right, p) && find(root->right,q))return lowestCommonAncestor(root->right, p , q);
        return root;
    }
*/

