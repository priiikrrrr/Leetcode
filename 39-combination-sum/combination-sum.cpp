class Solution {
public:
    void solve(vector<int>& candidates,vector<int>&temp,vector<vector<int>>&ans, int target, int id){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target < 0 || id >= candidates.size())return;
        temp.push_back(candidates[id]);
        solve(candidates, temp, ans, target - candidates[id], id);
        temp.pop_back();

        solve(candidates, temp, ans, target, id + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(candidates, temp, ans, target, 0);
        return ans;
    }
};