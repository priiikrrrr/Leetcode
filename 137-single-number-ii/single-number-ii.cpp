class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        if(nums.size() == 1)return nums[0];
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; i = i+3){
            if(nums[i] != nums[i+1] && nums[i] != nums[i+2])return nums[i];
        }
        return nums[nums.size() - 1];
    }
};