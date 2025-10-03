class Solution {
public:
    void solve(vector<int> nums,vector<int>ans,vector<vector<int>>&res){
        if(nums.size() == 0){
            res.push_back(ans);
            return;
        }
        vector<int> op1 = ans;
        vector<int> op2 = ans;

        op2.push_back(nums[0]);
        //not doing anything in op1 since , op1 is for subset where we are not talking the following ele 
        nums.erase(nums.begin());
        solve(nums, op1, res);
        solve(nums, op2, res);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>res;
        solve(nums, ans, res);
        return res;
    }
};