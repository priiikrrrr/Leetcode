class Solution {
public:
    void levels(TreeNode* root, int level, vector<long long>& sum) {
        if (root == NULL)
            return;

        if (level == sum.size())
            sum.push_back(0);

        sum[level] += root->val;

        levels(root->left, level + 1, sum);
        levels(root->right, level + 1, sum);
    }
    int maxLevelSum(TreeNode* root){
        vector<long long> sum;
        levels(root, 0, sum);

        int maxLevel = 0;
        for (int i = 1; i < sum.size(); i++) {
            if (sum[i] > sum[maxLevel]) {
                maxLevel = i;
            }
        }

        return maxLevel + 1; 
    }
};
