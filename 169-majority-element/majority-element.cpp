class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = n / 2;
        int ans = 0;
        if(nums.size() <= 1)return nums[0];
        sort(nums.begin(), nums.end());
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1])count++;
            else count = 1;
            if(count > maj)ans = nums[i];
        }
        return ans;
    }
};