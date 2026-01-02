class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int repele = n/2;
        int ans = 0;

        unordered_map<int,int>mp;
        for(int num : nums)mp[num]++;
        for(auto n : mp){
            if(n.second == repele)ans = n.first;
        }
        return ans;
    }
};