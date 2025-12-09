class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size() <= 2)return nums;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int &i : nums)mp[i]++;
        for(auto j : mp){
            int frq = j.second;
            if(frq == 1)ans.push_back(j.first);
        }
        return ans;
    }
};