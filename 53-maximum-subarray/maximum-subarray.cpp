class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = 0;
        int totalsum = nums[0];

        for(int i = 0 ; i < nums.size() ; i++){
            if(currentsum < 0)currentsum = 0;
            currentsum = currentsum + nums[i];
            totalsum = max(currentsum, totalsum);
        }
        return totalsum;
    }
};