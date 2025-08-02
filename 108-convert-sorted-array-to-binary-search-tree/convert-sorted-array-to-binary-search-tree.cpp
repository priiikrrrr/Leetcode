class Solution {
public:
    TreeNode* ArrayToBST(vector<int>& nums, int low, int high){
        if(low > high) return NULL;
        int mid = low + (high - low)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = ArrayToBST(nums, low , mid-1);//mid-1 as a new high;
        temp->right = ArrayToBST(nums, mid+1, high);//mid+1 as a new low
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        return ArrayToBST(nums, 0 , len -1);
    }
};