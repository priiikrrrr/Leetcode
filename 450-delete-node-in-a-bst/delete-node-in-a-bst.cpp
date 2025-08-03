class Solution {
public:
    TreeNode * Predcessor(TreeNode* root){
    // if(root->left == NULL)return NULL; //wont write this because , 2 child node cases hence , child toh honge hee
    TreeNode* pred = root->left;
    while(pred->right != NULL){
        pred = pred->right;
    }
    return pred;
}

    TreeNode * successor(TreeNode* root){
    // if(root->left == NULL)return NULL; //wont write this because , 2 child node cases hence , child toh honge hee
    TreeNode* suck  = root->right;
    while(suck->left != NULL){
        suck = suck->left;
    }
    return suck;
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)return NULL;
        if(root->val == key){
            //0 child
            if(root->left == NULL && root->right == NULL)return NULL;
            //1 child
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL)return root->left;
                else return root->right;
            }
            //2 children
            if(root->left != NULL && root->right != NULL){
        //call inOrder predcessor/successor of the keyNode jiske bhi do children h
                TreeNode* pred = Predcessor(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }
        }
        else if(root->val > key){
            //left
            root->left = deleteNode(root->left, key);
        }
        else{
            //right
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};