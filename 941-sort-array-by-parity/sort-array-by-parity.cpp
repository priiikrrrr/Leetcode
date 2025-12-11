class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size() == 1)return nums;
        int i = 0 ; 
        int j = nums.size() - 1;
        // vector<int>ans;
        while(i < j){
            while(i < j && nums[i] % 2 == 0)i++;
            while(i < j && nums[j] % 2 != 0) j--;
            swap(nums[i] , nums[j]);
        }
        return nums;
    }
};