class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                int lastSeen = mp[nums[i]];
                if(abs(lastSeen - i) <= k)return true;
                else mp[nums[i]] = i;
            }
            else mp[nums[i]] = i;
        }
        return false;
    }
};



















        //O(n sq) TC - TLE 
        // for (int i = 0; i < nums.size(); i++) {
        //     int j = nums.size() - 1;
        //     while (j > i) {
        //         if (nums[i] == nums[j] && abs(i - j) <= k)return true;
        //         else j--;
        //     }
        // }
        // return false;