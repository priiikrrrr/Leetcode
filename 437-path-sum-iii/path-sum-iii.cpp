class Solution {
public:
    void paths(TreeNode* root, long long sum, int& count){
        if(root == NULL) return;
        if((long long)(root->val)==sum)count++;
        paths(root->left  , (sum-(long long)(root->val))  , count);
        paths(root->right , ( sum-(long long)(root->val)) , count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL)return 0;
        int count = 0;
        paths(root, (long long)(targetSum), count); //this is to store the sum of every nodepath
        //is to visit every node
        count += pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
        return count;
    }
};