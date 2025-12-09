class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        if(nums.size() == 1)return nums[0];
        unordered_map<int, int>mp;
        for(int &i : nums)mp[i]++;
        for(auto j : mp){
            int frq = j.second;
            if(frq == 1)ans = j.first;
        }
        return ans;
    }
};