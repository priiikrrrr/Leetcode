class Solution {
public:
vector<vector<int>>final;
    void helper(vector<int>& nums, set<vector<int>>&res,vector<int>curr , int  index){
        if(index == nums.size()){
            if(res.find(curr) == res.end()){
                final.push_back(curr);
                res.insert(curr);
            }
            return;
        }
        //incl nums indx
        curr.push_back(nums[index]);
        helper(nums, res, curr , index+1);
        curr.pop_back();
        //excl nums indx
        helper(nums, res, curr , index+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>curr;
        set<vector<int>>res;
        sort(nums.begin(), nums.end());
        helper(nums, res, curr, 0);
        // return ve?ctor<vector<int>>(res.begin(), res.end());
        return final;
    }
};