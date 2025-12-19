class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int>mp;
        for(int &i : nums)mp[i]++;
        for(auto k : mp){
            if(k.second > n/2)ans = k.first;
        }
        return ans;
    }
};