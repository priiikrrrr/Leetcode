class Solution {
public:
    void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns,
           int index) {
        if (index == nums.size()) {
            finalAns.push_back(ans);
            return;
        }
        
        helper(nums, ans, finalAns, index + 1);
        ans.push_back(nums[index]);
        helper(nums, ans, finalAns, index + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>>finalAns;
        helper(nums, ans, finalAns, 0);
        return finalAns;
    }
};