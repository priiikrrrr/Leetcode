class Solution {
public:
    void trim(TreeNode* temp, int low, int high){
        if(temp == NULL)return;
        while(temp->left != NULL){
            if(temp->left->val > high){
                temp->left = temp->left->left;
            }
            else if(temp->left->val < low){
                temp->left = temp->left->right;
            }
            else break;
        }
        while(temp->right != NULL){
            if(temp->right->val > high){
                temp->right = temp->right->left;
            }
            else if(temp->right->val < low){
                temp->right = temp->right->right;
            }
            else break;
        }
        trim(temp->left, low, high);
        trim(temp->right, low, high);
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode* temp = new TreeNode(INT_MAX);
        temp->left = root;
        trim(temp,low,high);
        return temp->left;    
    }
};