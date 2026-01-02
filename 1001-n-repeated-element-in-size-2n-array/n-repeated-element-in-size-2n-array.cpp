class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int repele = n/2; //repeated ele occupy half of the array

        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(nums[i] == nums[i+1] || nums[i] == nums[i+2])return nums[i];
        }

        return nums[nums.size() - 1];
    }
};