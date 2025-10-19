class Solution {
public:
    void solve(vector<int>&nums, vector<int>&temp, vector<vector<int>>&ans, int idx){
        // if(nums.size() == idx){
        //     ans.push_back(temp);
        //     return;
        // }
        ans.push_back(temp);

        for(int i = idx ; i < nums.size() ; i++){
            if(i != idx && nums[i] == nums[i-1])continue;
            temp.push_back(nums[i]);
            solve(nums, temp, ans, i+1);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(), nums.end());
        solve(nums, temp , ans, 0);
        return ans;
    }
};