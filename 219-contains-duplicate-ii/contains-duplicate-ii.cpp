class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ldx = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                if(i - mp[nums[i]] <= k)return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};