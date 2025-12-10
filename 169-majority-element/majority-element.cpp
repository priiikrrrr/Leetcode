class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int ans = 0;
        for(auto &i : nums)mp[i]++;
        for(auto j : mp){
            int frq = j.second;
            if(frq > (n/2))ans = j.first;
        }
        return ans;
    }
};