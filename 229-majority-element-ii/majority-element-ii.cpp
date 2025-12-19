class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums;
        map<int, int>mp;
        for(int &i : nums)mp[i]++;
        vector<int>ans;
        for(auto j : mp){
            if(j.second > n/3)ans.push_back(j.first);
        }
        return ans;
    }
};